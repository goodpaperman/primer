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
  string str; 
  list<string> slist; 
  while(cin >> str)
    slist.push_back(str); 

  cin.clear(); 
  cin >> str; 
  list<string>::iterator it = find(slist.begin(), slist.end(), str); 
  if(it == slist.end())
    cout << str << " not find" << endl; 
  else 
  {
    cout << str << " find at " << *it << endl; 
    slist.erase(it); 
  }

  return 0; 
}
