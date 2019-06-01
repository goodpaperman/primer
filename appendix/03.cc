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
#include <numeric>  
#include <functional> 
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
using std::multimap; 
using std::set; 
using std::multiset; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

bool fn_tribble(const int &v1, const int &v2)
{
  cout << v1 << " @ " << v2 << endl; 
  return (v1 == 3 * v2); 
}

class multiplier {
public:
  bool operator() (const int &v1, const int &v2)
  {
    return (v2 != 0 && v1 % v2 == 0);     
  }
}; 

int main()
{
  int isrc[10] = { 2, 3, 9, 9, 2, 1, 1, 3, 3, 8 }; 
  int idest[3] = { 1, 3, 3 }; 
  int *pos = adjacent_find(isrc, isrc+10); 
  if(pos != isrc+10)
    cout << "adjacent find at " << pos-isrc 
         << " = " << *pos << endl; 

  pos = adjacent_find(isrc, isrc+10, fn_tribble); 
  if(pos != isrc+10)
    cout << "adjacent find tribble at " << pos-isrc
         << " = " << *pos << endl; 

  pos = adjacent_find(isrc, isrc+10, multiplier()); 
  if(pos != isrc+10)
    cout << "adjacent find multiplier at " << pos-isrc
         << " = " << *pos << endl; 

  pos = search(isrc, isrc+10, idest, idest+3); 
  if(pos != isrc+10)
    cout << "search substring at " << pos-isrc 
         << " = " << *pos << endl; 

  pos = search(isrc, isrc+10, idest, idest+3, fn_tribble); 
  if(pos != isrc+10)
    cout << "search tribble at " << pos-isrc
         << " = " << *pos << endl; 

  pos = search(isrc, isrc+10, idest, idest+3, multiplier()); 
  if(pos != isrc+10)
    cout << "search multiplier at " << pos-isrc
         << " = " << *pos << endl; 
 
  pos = search_n(isrc, isrc+10, 2, 3); 
  if(pos != isrc+10)
    cout << "search 2 3 at " << pos-isrc 
         << " = " << *pos << endl; 

  pos = search_n(isrc, isrc+10, 3, 3, multiplier()); 
  if(pos != isrc+10)
    cout << "search 3 3 multiplier at " << pos-isrc
         << " = " << *pos << endl; 

  return 0;
}
