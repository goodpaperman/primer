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

int display(const int &v1)
{
  cout << v1 << " "; 
  return 0; 
}

bool fn_not_1(const int &v1, const int &v2)
{
  cout << v1 << " @ " << v2 << endl; 
  if(v1 == 1 || v2 == 1)
    return false; 
  else 
    return v1 == v2; 
}

class notx {
public:
  notx(int i) : x(i) {}
  bool operator() (const int &v1, const int &v2)
  {
    if(v1 == x || v2 == x)
       return false; 
    else 
      return v1 == v2; 
  }

private:
  int x; 
}; 

int main()
{
  int isrc[10] = { 2, 3, 9, 9, 2, 1, 1, 3, 3, 8 }; 
  int idest[11] = { 2, 3, 9, 9, 2, 1, 1, 3, 3, 9, 8}; 
  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  cout << "dest is: " << endl; 
  for_each(idest, idest+11, display); 
  cout << endl; 

  pair<int*, int*> ret = mismatch(isrc, isrc+10, idest); 
  if(ret.first != isrc+10)
    cout << "mismatch find at " << ret.first-isrc 
         << " with " << *ret.first << " and " << *ret.second << endl; 

  ret = mismatch(isrc, isrc+10, idest, fn_not_1); 
  if(ret.first != isrc+10)
    cout << "mismatch (not 1) find at " << ret.first-isrc
         << " with " << *ret.first << " and " << *ret.second << endl; 

  ret = mismatch(isrc, isrc+10, idest, notx(8)); 
  if(ret.first != isrc+10)
    cout << "mismatch (not 8) find at " << ret.first-isrc
         << " with " << *ret.first << " and " << *ret.second << endl; 

  bool res = equal(isrc, isrc+10, idest); 
  if(!res) 
    cout << "not equal" << endl;

  res = equal(isrc, isrc+9, idest); 
  if(res)
    cout << "equal" << endl; 
   
  return 0;
}
