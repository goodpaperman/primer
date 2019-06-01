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
  string str("abcd11234ASFSADF!@#$!@#$"); 
  cout << str << endl; 
  for(string::iterator it = str.begin(); 
      it != str.end();)
  {
    if(isupper(*it))
      it = str.erase(it); 
    else 
      ++ it; 
  }

  cout << "after erase upper case: " << endl << str << endl; 
  for(string::iterator it = str.begin(); 
      it != str.end(); ++ it)
  {
    if(islower(*it))
      *it = toupper(*it); 
  }

  cout << "after change case: " << endl << str << endl; 
  return 0; 
}
