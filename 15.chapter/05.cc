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

struct ConcreteBase {
  int m_base; 
}; 

struct C1 : public ConcreteBase {
  void f() { 
    m_base = 0; 
    ConcreteBase base = *this; 
  }
}; 

struct C2 : protected ConcreteBase {
  void f() { 
    m_base = 0; 
    ConcreteBase base = *this; 
  }
}; 

struct C3 : private ConcreteBase {
  void f() { 
    m_base = 0; 
    ConcreteBase base = *this; 
  }
}; 

struct C4 : public C3 {
  void f() {
    //m_base = 0; 
    //ConcreteBase base = *this; 
  }
}; 

int main(int argc, char **argv)
{
  ConcreteBase base; 
  C1 c1; 
  C2 c2; 
  C3 c3;
  C4 c4; 
  c1.f(); 
  c2.f(); 
  c3.f();  
  base = c1; 
  //base = c2; 
  //base = c3; 
  c3 = c4;
  //base = c4;  
  return 0; 
}
