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
  deque<string> sdeque; 
  while(cin >> str)
    sdeque.push_back(str); 

  cin.clear(); 
  cin >> str; 
  deque<string>::iterator it = find(sdeque.begin(), sdeque.end(), str); 
  if(it == sdeque.end())
    cout << str << " not find" << endl; 
  else 
  {
    cout << str << " find at " << *it << endl; 
    sdeque.erase(it); 
  }

  return 0; 
}
