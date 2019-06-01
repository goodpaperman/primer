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

class Base
{
public:
  virtual Base* copy(Base*)
  {
    cout << "Base::copy" << endl; 
    return NULL; 
  }
  
  virtual ostream& print(int, ostream& o = cout)
  {
    cout << "Base::print" << endl; 
    return o; 
  }

  virtual void eval() const 
  {
    cout << "Base::eval" << endl; 
  } 
}; 

class Derived : public Base
{
public:
  virtual /*Base**/Derived* copy(/*Derived**/ Base*) 
  { 
    cout << "Derived::copy" << endl; 
    return NULL; 
  }

  ostream& print(int, ostream& o)
  {
    cout << "Derived::print" << endl; 
    return o; 
  }

  void eval() 
  {
    cout << "Derived::eval" << endl; 
  }
}; 

int main(int argc, char **argv)
{
  Derived d, d2;
  Base* pb = &d;  
  pb->copy(&d2); 
  pb->print(0, cout); 
  pb->eval(); 
  return 0; 
}
