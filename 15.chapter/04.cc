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
  static std::size_t object_count(){ return 0;} 
protected:
  static std::size_t obj_count; 
}; 

struct C1 : public ConcreteBase {
  void f(const C1 &c1); 
}; 

std::size_t ConcreteBase::obj_count = 0; 

void C1::f(const C1 &c1)
{
  object_count(); 
  ConcreteBase::object_count(); 
  C1::object_count(); 
  c1.object_count();
  obj_count = 0; 
  ConcreteBase::obj_count = 1; 
  C1::obj_count = 2; 
  c1.obj_count = 3;  
}
  
int main(int argc, char **argv)
{
  C1 c1,c2; 
  c1.f(c2);   
  c1.object_count(); 
  //c1.obj_count = 4; 
  return 0; 
}
