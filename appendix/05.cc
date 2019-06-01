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

class tracer {
public:
  bool operator ()(const int &v1, const int &v2)
  {
    cout << v1 << " @ " << v2 << endl; 
    return v1 < v2; 
  }
}; 

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  int *pos = lower_bound(isrc, isrc+10, 5); 
  cout << "lower bound for 5 is " << pos-isrc << endl; 
  if(pos != isrc+10)
    cout << " with " << *pos << endl; 

  pos = lower_bound(isrc, isrc+10, 6, tracer()); 
  cout << "lower bound for 6 is " << pos-isrc << endl; 
  if(pos != isrc+10)
    cout << " with " << *pos << endl; 

  pos = upper_bound(isrc, isrc+10, 10); 
  cout << "upper bound for 10 is " << pos-isrc << endl; 
  if(pos != isrc+10)
    cout << " with " << *pos << endl; 

  pos = upper_bound(isrc, isrc+10, 11, tracer()); 
  cout << "upper bound for 11 is " << pos-isrc << endl; 
  if(pos != isrc+10)
    cout << " with " << *pos << endl; 

  pair<int*, int*> ret = equal_range(isrc, isrc+10, 4); 
  cout << "equal range for 4 is " << ret.first-isrc 
       << " and " << ret.second-isrc << endl; 
  if(ret.first != isrc+10)
    cout << " with " << *ret.first << endl; 
  if(ret.second != isrc+10)
    cout << " with " << *ret.second << endl; 

  ret = equal_range(isrc, isrc+10, 12, tracer()); 
  cout << "equal range for 12 is " << ret.first-isrc
       << " and " << ret.second-isrc << endl; 
  if(ret.first != isrc+10)
     cout << " with " << *ret.first << endl; 
  if(ret.second != isrc+10)
     cout << " with " << *ret.second << endl; 
  
  bool res = binary_search(isrc, isrc+10, 7); 
  if(res)
    cout << "find 7" << endl; 

  res = binary_search(isrc, isrc+10, 8, tracer()); 
  if(!res)
    cout << "not find 8" << endl; 

  return 0;
}
