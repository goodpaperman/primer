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

class A {
public:
  A() {}
  virtual ~A() {}
}; 
 
class B : virtual public A{
public:
  B() {}
  virtual ~B() {}
}; 

class C : public B{ 
public:
  C() {}
  virtual ~C() {}
}; 
 
class D : virtual public B, virtual public A {
public:
  D() {}
  virtual ~D() {}
}; 

int main(int argc, char **argv)
{
  {
    A *pa = new C; 
    B *pb = dynamic_cast<B *>(pa); 
    if(typeid(*pb) == typeid(C))
      cout << "type C" << endl; 
  }

  {
    B *pb = new B; 
    C *pc = dynamic_cast<C *>(pb); 
    //if(typeid(*pc) == typeid(C))
    //  cout << "type C" << endl; 
  }

  {
    A *pa = new D; 
    B *pb = dynamic_cast<B *>(pa); 
    if(typeid(*pa) == typeid(*pb))
      cout << "same type" << endl; 
  }

  {
  }

  return 0;
}
