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
using namespace std; 

int main(int argc, char **argv)
{
  map<string, vector<pair<string, string> > > name_map; 
  name_map["yun"].push_back(make_pair("heping", "1951-5-1")); 
  name_map["yun"].push_back(make_pair("haibo", "1983-10-20")); 
  name_map["yun"].push_back(make_pair("haizhen", "1984-10-4")); 
  name_map["yun"].push_back(make_pair("hai", "1986-10-7")); 
  
  for(map<string, vector<pair<string, string> > >::iterator it = name_map.begin(); 
      it != name_map.end(); ++it)
  {
    for(vector<pair<string, string> >::iterator i = it->second.begin(); 
        i != it->second.end(); ++i)
      cout << it->first << " " << i->first << " " << i->second << endl;  
  }

  return 0; 
}
