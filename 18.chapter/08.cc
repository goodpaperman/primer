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
 
class B : public A{
public:
  B() {}
  virtual ~B() {}
}; 

class C : public B{ 
public:
  C() {}
  virtual ~C() {}
}; 
 

int main(int argc, char **argv)
{
  int iobj; 
  cout << typeid(iobj).name() << endl
       << typeid(8.16).name() << endl
       << typeid(string).name() << endl
       << typeid(A).name() << endl
       << typeid(B).name() << endl
       << typeid(C).name() << endl; 

  A *pa = new C; 
  cout << typeid(pa).name() << endl; 
  C cobj; 
  A &ra = cobj; 
  cout << typeid(&ra).name() << endl; 
  B *px = new B; 
  A &ra2 = *px; 
  cout << typeid(ra2).name() << endl; 

  return 0;
}
