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
#include "QueueEx.h" 

int main()
{
  Queue<int> qi; 
  Queue<char*> qp; 
  Queue<const char*> qcp; 

  qi.push(1); 
  qi.push(3); 
  qi.push(4); 

  qp.push("hello"); 
  qp.push("world"); 
  qp.push("!"); 

  qcp.push("hello"); 
  qcp.push("world"); 
  qcp.push("!"); 

  cout << qi << endl; 
  cout << qp << endl; 
  cout << qcp << endl; 
  return 0; 
}
