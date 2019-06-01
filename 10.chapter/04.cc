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
  map<vector<int>::iterator, int> map1; 
  vector<int> ivec(10, 42); 
  for(vector<int>::iterator it = ivec.begin(); it!=ivec.end(); ++it)
    map1[it] = *it; 
  
  //map<list<int>::iterator, int> map2; 
  //list<int> ilist(10, 42); 
  //for(list<int>::iterator it = ilist.begin(); it!=ilist.end(); ++it)
  //  map2[it] = *it; 

  map<pair<int, string>, int> map3; 
  map3[pair<int, string>(1, "1")] = 1; 
  return 0; 
}
