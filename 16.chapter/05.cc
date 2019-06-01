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
T frequency(typename vector<T>::const_iterator begin, 
            typename vector<T>::const_iterator end)
{
  map<T, int> val_map; 
  for(typename vector<T>::const_iterator it = begin; it != end; ++ it)
  {
    ++ val_map[*it]; 
  }

  T ret; 
  int max = 0; 
  for(typename map<T, int>::iterator it = val_map.begin(); 
      it != val_map.end(); ++ it)
  {
    if(it->second > max)
    {
      max = it->second; 
      ret = it->first; 
    }
  }

  return ret; 
}

template <typename C>
void print_container(const C &c)
{
  //for(typename C::const_iterator it = c.begin(); it != c.end(); ++it)
  //  cout << *it << endl; 
  for(typename C::size_type i = 0; i != c.size(); ++ i)
    cout << c[i] << endl; 
}

template <typename T, size_t N>
void print_array(T (&array)[N])
{
  for(int i=0; i < N; ++i)
    cout << array[i] << endl; 
}

int main(int argc, char **argv)
{
  vector<int> ivec; 
  for(int i=0; i<100; ++i)
    ivec.push_back(i % 10);

  ivec.push_back(9); 
  cout << frequency<int>(ivec.begin(), ivec.end()) << endl;  

  print_container(ivec); 

  int x[42] = { 0 }; 
  for(int i=0; i<42; ++i)
    x[i] = 2 * i; 

  cout << "print array of x[42]: " << endl; 
  print_array(x); 

  double y[10] = { 0 }; 
  for(int i=0; i<10; ++i)
    y[i] = 10 * i; 

  cout << "print array of y[10]: " << endl; 
  print_array(y); 
}
