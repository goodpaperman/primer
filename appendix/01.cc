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

bool second_3(int val)
{
  static bool second = false; 
  if(val == 3)
  {
    if(second)
      return true; 
    else 
      second = true; 
  }

  return false; 
}

class is_even {
public:
  bool operator() (const int &val) 
  { return val % 2 == 0; }
}; 

bool fn_is_even(const int &val)
{
  return val % 2 == 0; 
}

class is_odd {
public:
  bool operator() (const int &val) const
  {  return val % 2 == 1; }
}; 

int main()
{
  int iarr[10] = { 1, 2, 3, 2, 2, 3, 1, 4, 4, 1 }; 
  int *pos = find(iarr, iarr + 10, 4); 
  if(pos != iarr + 10)
    cout << "find 4 at " << pos - iarr << endl; 

  pos = find(iarr, iarr + 10, 5); 
  if(pos == iarr + 10)
    cout << "not find 5" << endl; 

  pos = find_if(iarr, iarr + 10, second_3); 
  if(pos != iarr + 10)
    cout << "find 3 at " << pos - iarr << " with condition" << endl; 

  pos = find_if(iarr, iarr + 10, is_even()); 
  if(pos != iarr + 10)
    cout << "find even at " << pos - iarr << " with condition" << endl; 

  int cnt = count(iarr, iarr + 10, 4); 
  cout << "count of 4 = " << cnt << endl; 

  cnt = count(iarr, iarr + 10, 5); 
  cout << "count of 5 = " << cnt << endl; 

  cnt = count_if(iarr, iarr + 10, fn_is_even); 
  cout << "count of even = " << cnt << endl; 

  cnt = count_if(iarr, iarr + 10, is_odd()); 
  cout << "count of odd = " << cnt << endl; 
  return 0;
}
