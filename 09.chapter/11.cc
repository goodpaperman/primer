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
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 }; 
  vector<int> ivec(ia, ia+11); 
  list<int> ilist(ia, ia+11); 
  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); )
  {
    if(*it % 2 == 0)
      it = ivec.erase(it);  
    else 
      ++ it; 
  }

  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); ++it)
    cout << *it << " "; 

  cout << endl; 
  for(list<int>::iterator it = ilist.begin(); 
       it != ilist.end();) 
  {
    if(*it % 2 != 0)
       it = ilist.erase(it); 
    else 
        ++ it; 
  }

  for(list<int>::iterator it = ilist.begin(); 
      it != ilist.end(); ++it)
    cout << *it << " "; 
  
  cout << endl; 
  return 0; 
}
