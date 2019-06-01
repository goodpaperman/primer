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

int fn_gen()
{
  return rand() % 99; 
}

class gen {
public:
  int operator()() { return rand() % 99; }
}; 

class odd { 
public:
  bool operator()(const int &v) { return v % 2 == 0; }
}; 

bool comparer(const int &v1, const int &v2)
{
  return v1 < v2; 
}

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  int isrc2[10] = { 0 }; 
  int idest[12] = { 0 }; 

  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  int a = 10, b = 42; 
  swap(a, b); 
  cout << "after swap: " << endl; 
  cout << a << " " << b << endl; 

  iter_swap(isrc, isrc+9); 
  cout << "after swap: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  swap_ranges(isrc, isrc+5, isrc+5); 
  cout << "after swap: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  fill(isrc2, isrc2+10, 3); 
  cout << "after fill: " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 

  generate(idest, idest+12, gen()); 
  cout << "after gen: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl;   

  replace(isrc, isrc+10, 11, 10); 
  cout << "after replace: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  replace_if(idest, idest+10, odd(), 0); 
  cout << "after replace if: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  copy_backward(isrc, isrc+10, isrc2+10); 
  cout << "after copy backward: " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 

  iter_swap(isrc+5, isrc+9); 
  cout << "before inplace merge: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  inplace_merge(isrc, isrc+5, isrc+10); 
  cout << "after inplace merge: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  inplace_merge(isrc, isrc+5, isrc+10, comparer); 
  cout << "after inplace merge (compare): " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  return 0;
}
