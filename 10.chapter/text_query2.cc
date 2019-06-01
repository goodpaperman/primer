#include <iostream>
#include <fstream> 
#include <vector> 
#include <set> 
#include <map> 
#include <string> 
#include <sstream> 
#include "text_query2.h" 

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
    {
      word_map.insert(std::make_pair(word, line)); 
      std::cout << line << ": " << word << std::endl; 
    }
  }
}

std::set<TextQuery::line_no> TextQuery::run_query(const std::string &word) const
{
  std::set<line_no> lines; 
  std::pair<std::multimap<std::string, int>::const_iterator, std::multimap<std::string, int>::const_iterator> it = word_map.equal_range(word); 
  while(it.first != it.second)
  {
    lines.insert(it.first->second);
    ++ it.first; 
  } 
  
  return lines;  
}

std::string TextQuery::text_line(line_no line) const
{
  if(line >= 0 && line < lines_of_text.size())
    return lines_of_text[line]; 
  else 
    return ""; 
}

