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

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  fill_n(isrc, 8, 3); 
  cout << "after fill: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  generate_n(isrc, 10, fn_gen); 
  cout << "after gen function: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  generate_n(isrc, 10, gen()); 
  cout << "after gen functor: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  return 0;
}
