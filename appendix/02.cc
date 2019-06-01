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

bool fn_multiplier(const int &v1, const int &v2)
{
  cout << v1 << " @ " << v2 << endl; 
  if(v2 != 0 && v1 % v2 == 0)
    return true; 
  return false; 
}

class factor {
public:
  bool operator() (const int &v1, const int &v2)
  {
    cout << v1 << " @ " << v2 << endl; 
    if(v1 != 0 && v2 % v1 == 0)
      return true; 
    return false; 
  }
}; 

int main()
{
  int isrc[10] = { 1, 3, 6, 7, 9, 2, 5, 4, 8, 0}; 
  int idest[3] = { 2, 5, 4 }; 
  int *pos = find_first_of(isrc, isrc+10, idest, idest+3); 
  if(pos != isrc+10)
    cout << "find first of 2, 5, 4 at " << pos - isrc << " = " << *pos << endl;

  pos = find_first_of(isrc, isrc+5, idest, idest+3); 
  if(pos == isrc+5)
    cout << "not find any 2, 5, 4 in isrc to isrc+5" << endl; 

  pos = find_first_of(isrc, isrc+10, idest, idest+3, fn_multiplier); 
  if(pos != isrc+10)
    cout << "find first of 2, 5, 4 mutiplier at " << pos - isrc
         << " = " << *pos << endl; 

  pos = find_first_of(isrc, isrc+10, idest, idest+3, factor()); 
  if(pos != isrc+10)
    cout << "find first of 2, 5, 4 factor at " << pos - isrc
         << " = " << *pos << endl; 


  pos = find_end(isrc, isrc+10, idest, idest+3);   
  if(pos != isrc+10)
    cout << "find end of 2, 5, 4 at " << pos - isrc
         << " = " << *pos << endl; 

  pos = find_end(isrc, isrc+7, idest, idest+3); 
  if(pos != isrc+7)
    cout << "find end of 2, 5, 4 at " << pos - isrc
         << " = " << *pos << " in isrc to isrc+7" << endl; 

  pos = find_end(isrc, isrc+10, idest, idest+3, fn_multiplier); 
  if(pos != isrc+10)
    cout << "find end of 2, 5, 4 multiplier at " << pos-isrc 
         << " = " << *pos << endl;   

  pos = find_end(isrc, isrc+10, idest, idest+3, factor()); 
  if(pos != isrc+10)
    cout << "find end of 2, 5, 4 factor at " << pos-isrc
         << " = " << *pos << endl; 

  return 0;
}
