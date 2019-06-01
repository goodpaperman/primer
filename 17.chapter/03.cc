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

class Class {
public:
  Class() { cout << "Class()" << endl; }
}; 

class Base : public Class {
public:
  Base() { cout << "Base()" << endl; }
}; 

class D1 : virtual public Base {
public:
  D1() { cout << "D1()" << endl; }
}; 

class D2 : virtual public Base {
public:
  D2() { cout << "D2()" << endl; }
}; 

class MI : public D1, public D2 {
public:
  MI() { cout << "MI()" << endl; }
}; 

class Final : public MI, public Class { 
public:
  Final() { cout << "Final()" << endl; }
}; 

int main()
{
  Final f; 
  return 0; 
}
