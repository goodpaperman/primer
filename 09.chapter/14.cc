#include <iostream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <algorithm> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque; 

int main()
{
  char *ca[4] = { 
    "abc", 
    "123", 
    "!@#", 
    "ABC", 
  }; 

  list<char *> slist(ca, ca+4); 
  vector<string> svec; 
  
  svec.assign(slist.begin(), slist.end()); 
  for(vector<string>::iterator it = svec.begin(); 
      it != svec.end(); ++it) 
    cout << *it << endl; 

  return 0; 
}
