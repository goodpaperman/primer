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

class Base {
  static void statmem(); 
}; 

class Derived : Base {
  void f(const Derived&); 
}; 

void Derived::f(const Derived &derived_obj)
{
  Base::statmem(); 
  Dervied::statmem(); 
  derived_obj.statmem(); 
  statmem(); 
}
  
int main(int argc, char **argv)
{
  
  return 0; 
}
