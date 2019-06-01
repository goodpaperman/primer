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
  if(v1 < v2)
    return -1; 
  if(v2 < v1)
    return 1; 
  return 0; 
}

template <>
int compare<const char*>(const char* const &v1, const char* const &v2)
{
  return strcmp(v1, v2); 
}

template <typename T>
int count(typename vector<T>::const_iterator beg, 
          typename vector<T>::const_iterator end,
          const T &val)
{
  int n = 0; 
  for(typename vector<T>::const_iterator it = beg; 
      it != end; ++ it)
  {
    if(*it == val)
      ++ n; 
  }

  return n; 
}

template <>
int count<const char*>(vector<const char*>::const_iterator beg, 
                       vector<const char*>::const_iterator end, 
                       const char* const &val)
{
  int n = 0; 
  for(vector<const char*>::const_iterator it = beg; 
      it != end; ++ it)
  {
    if(strcmp(*it, val) == 0)
      ++ n; 
  }

  return n; 
}

int main()
{
  char *p1 = "world", *p2 = "hi"; 
  const char *cp1 = p1, *cp2 = p2; 
  int i1(1), i2(2); 
  cout << compare(p1, p2) << endl; 
  cout << compare(cp1, cp2) << endl; 
  cout << compare(i1, i2) << endl; 

  int iarr[10] = { 2, 3, 9, 8, 2, 3, 8, 3, 0, 1 }; 
  vector<double> dvec(iarr, iarr+10); 
  vector<int> ivec(iarr, iarr+10); 
  vector<char> cvec(iarr, iarr+10); 

  cout << count(dvec.begin(), dvec.end(), 3) << endl; 
  cout << count(ivec.begin(), ivec.end(), 2) << endl; 
  cout << count(cvec.begin(), cvec.end(), 8) << endl; 

  const char* str[10] = 
  {
    "a", "b", "c", "b", "b", "b", "c", "c", "d", "c"
  }; 

  vector<const char*> strvec(str, str+10); 
  cout << count(strvec.begin(), strvec.end(), "a") << endl; 
  cout << count(strvec.begin(), strvec.end(), "b") << endl; 
  cout << count(strvec.begin(), strvec.end(), "c") << endl; 
  return 0; 
}
