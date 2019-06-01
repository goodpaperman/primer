#include <iostream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque; 

int main()
{
  int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }; 
  vector<int> ivec(a, a+10); 
  vector<int>::iterator it = ivec.begin(); 
  while(it != ivec.end())
  {
    it = ivec.insert(it, 42); 
    ++ it; 
    ++ it; 
  }

  for(it = ivec.begin(); it != ivec.end(); ++it)
    cout << *it << endl; 

  return 0; 
}
