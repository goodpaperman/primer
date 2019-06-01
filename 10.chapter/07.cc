#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <utility> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::map; 
using std::set; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 

int main(int argc, char **argv)
{
  map<string, string> trans_map; 
  string key, value; 
  if(argc != 3)
    throw runtime_error("wrong number of arguments"); 

  ifstream map_file; 
  map_file.open(argv[1]); 
  if(!map_file)
    throw runtime_error("no transformation file"); 

  while(map_file >> key >> value) 
    trans_map.insert(make_pair(key, value)); 

  ifstream input; 
  input.open(argv[2]); 
  if(!input)
    throw runtime_error("no input file"); 

  string line; 
  while(getline(input, line))
  {
    istringstream stream(line); 
    string word; 
    while(stream >> word)
    {
      map<string, string>::const_iterator map_it = 
                           trans_map.find(word); 
      if(map_it != trans_map.end())
        word = map_it->second; 

      cout << " " << word; 
    }

    cout << endl; 
  }

  return 0; 
}
