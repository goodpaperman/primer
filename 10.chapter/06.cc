#include <iostream> 
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

using std::cin; 
using std::cout; 
using std::endl; 
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

int main()
{
  string word; 
  map<string, int> simap; 
  while(cin >> word)
  {
    pair<map<string, int>::iterator, bool> ret = simap.insert(make_pair(word, 1));
    if(!ret.second)
      ++ ret.first->second; 
  }

  for(map<string, int>::iterator it = simap.begin(); it!=simap.end(); ++it)
    cout << it->first << ": " << it->second << endl; 

  return 0; 
}
