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

template <typename T>
int compare(const T &v1, const T &v2)
{
  if(v1 < v2) return -1; 
  if(v2 < v1) return 1; 
  return 0; 
}

int main(int argc, char **argv)
{
  cout << compare(1, 0) << endl; 
  cout << compare(string("hi"), string("world")) << endl; 
  const char *p1 = "hi", *p2 = "world"; 
  //cout << compare("hi", "world") << endl; 
  cout << compare(p1, p2) << endl; 
  return 0; 
}
