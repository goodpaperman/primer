#include <iostream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <algorithm> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::priority_queue; 


int main()
{
  char ch; 
  stack<char> cstack; 
  while(cin >> ch)
  {
    if(ch == ')' && !cstack.empty())
    {
      cout << ch; 
      while(!cstack.empty() && cstack.top() != '(')
      {
        cout << cstack.top(); 
        cstack.pop(); 
      }
      
      if(!cstack.empty())
      {
        cout << cstack.top() << endl; 
        cstack.pop(); 
      }

      cstack.push(0); 
      continue; 
    }

    cstack.push(ch); 
  }

  
  return 0; 
}
