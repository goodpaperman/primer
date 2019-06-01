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
  string word; 
  stack<string> sstack; 
  while(cin >> word)
    sstack.push(word); 

  while(!sstack.empty())
  {
    cout << sstack.top() << endl; 
    sstack.pop(); 
  }

  return 0; 
}
