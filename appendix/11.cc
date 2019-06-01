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

class lesser {
public:
  lesser(int l) : level(l) {}
  bool operator()(const int &v) { return v < level; }
private:
  int level; 
}; 

class comparer {
public:
  bool operator() (const int &v1, const int &v2)
  { cout << v1 << " @ " << v2 << endl;  return v1 < v2; }
};


int main()
{
  int isrc[3] = { 1, 2, 3 };  
  int idest[3] = { 0 }; 

  cout << "source is: " << endl; 
  for_each(isrc, isrc+3, display); 
  cout << endl; 

  cout << "next group: " << endl; 
  while(next_permutation(isrc, isrc+3))
  {
    for_each(isrc, isrc+3, display); 
    cout << endl; 
  }
  
  prev_permutation(isrc, isrc+3); 
  cout << "prev group: " << endl; 
  while(prev_permutation(isrc, isrc+3))
  {
    for_each(isrc, isrc+3, display); 
    cout << endl; 
  }
  
  return 0;
}
