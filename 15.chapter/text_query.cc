#include <fstream> 
#include <vector> 
#include <set> 
#include <map> 
#include <string> 
#include <sstream> 
#include "text_query.h" 

void TextQuery::store_file(std::ifstream &is)
{
  std::string line; 
  while(getline(is, line))
    lines_of_text.push_back(line); 
}

void TextQuery::build_map()
{
  int line = 0; 
  for(std::vector<std::string>::iterator it = lines_of_text.begin(); 
      it != lines_of_text.end(); ++ it, ++ line)
  {
    std::istringstream stream(*it); 
    std::string word; 
    while(stream >> word)
      word_map[word].insert(line); 
  }
}

std::set<TextQuery::line_no> TextQuery::run_query(const std::string &word) const
{
  std::map<std::string, std::set<TextQuery::line_no> >::const_iterator it = word_map.find(word);
  if(it != word_map.end())
    return it->second; 
  
  return std::set<line_no>();  
}

std::string TextQuery::text_line(line_no line) const
{
  if(line >= 0 && line < lines_of_text.size())
    return lines_of_text[line]; 
  else 
    return ""; 
}

