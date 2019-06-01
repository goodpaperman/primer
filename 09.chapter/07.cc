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
  deque<int> eventq; 
  deque<int> oddq; 
  list<int> ilist; 
  for(int i=0; i<100; ++i)
    ilist.push_front(i+1); 

  for(list<int>::iterator it = ilist.begin(); 
      it != ilist.end(); ++it)
  {
    if(*it % 2 == 0)
      eventq.push_back(*it); 
    else 
      oddq.push_back(*it); 
  }

  cout << "event numbers are: " << endl; 
  for(deque<int>::iterator it = eventq.begin(); 
      it != eventq.end(); ++it)
    cout << *it << " "; 

  cout << endl; 
  cout << "old numbers are: " << endl; 
  for(deque<int>::iterator it = oddq.begin(); 
      it != oddq.end(); ++it)
    cout << *it << " "; 

  cout << endl; 
  return 0; 
}
