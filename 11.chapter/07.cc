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

void print(list<int>::iterator first, list<int>::iterator last)
{
  while(first != last)
  {
    cout << *first << " "; 
    ++ first; 
  }
  cout << endl; 
}

int main(int argc, char **argv)
{
  list<int> list1, list2, list3; 
  for(list<int>::size_type i = 0; i!=4; ++i)
    list1.push_front(i); 

  print(list1.begin(), list1.end()); 
  return 0; 
}
