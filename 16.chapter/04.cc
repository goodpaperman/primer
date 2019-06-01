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
T max_val(const T &v1, const T &v2)
{
  if(v1 <= v2) return v2; 
  else return v1; 
}

template <typename T>
typename vector<T>::iterator find_val(typename vector<T>::iterator begin, 
                         typename vector<T>::iterator end, const T &v)
{
  for(typename vector<T>::iterator iter = begin; iter != end; ++iter)
    if(*iter == v)
      return iter; 

  return end; 
}

template <typename Type>
class Queue{
public:
  Queue(){ } 
  Type &front(); 
  const Type &front() const; 
  void push(const Type &); 
  void pop(); 
  bool empty() const; 
private:
}; 


int main(int argc, char **argv)
{
  cout << max_val(1, 2) << endl; 
  cout << max_val(1.0, 2.0) << endl; 
  cout << max_val(string("1.0"), string("2.0")) << endl;

  vector<int> ivec;
  vector<string> svec; 
  for(int i=0; i<10; ++i)
  {
    ivec.push_back(i);  
    svec.push_back(string(i+1, 'a')); 
  }
   
  cout << *find_val(ivec.begin(), ivec.end(), 2) << endl; 
  cout << *find_val(svec.begin(), svec.end(), string("aaa")) << endl;
 
  Queue<int> iqueue; 
}
