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
  if(v1 < v2) return 1;
  if(v2 < v1) return -1; 
  return 0; 
}

template <typename T1, typename T2, typename T3>
T1 sum(T2 v1, T3 v2)
{
  return v1 + v2; 
}

int main(int argc, char **argv)
{
  cout << max(1, 2) << endl; 
  //cout << max(1, 2.1) << endl; 
  cout << max<int>(1, 2.1) << endl; 

  cout << compare(1, 2) << endl; 
  cout << compare<double>(1, 2.1) << endl; 
  cout << compare<string>("hello", "world") << endl; 

  cout << sum<double>(1, 2.1) << endl;
  cout << sum<double, int>(2.1, 1) << endl;  
  return 0;
}
