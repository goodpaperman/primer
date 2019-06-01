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
  map<string, vector<string> > name_map; 
  name_map["yun"].push_back("heping"); 
  name_map["yun"].push_back("haibo"); 
  name_map["yun"].push_back("haizhen"); 
  name_map["yun"].push_back("hai"); 
  
  for(map<string, vector<string> >::iterator it = name_map.begin(); 
      it != name_map.end(); ++it)
  {
    for(vector<string>::iterator i = it->second.begin(); 
        i != it->second.end(); ++i)
      cout << it->first << " " << *i << endl;  
  }

  return 0; 
}
