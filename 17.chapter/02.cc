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

class X {}; 
class A {}; 
class B : public A {}; 
class C : private B {}; 
class D : public X, public C {}; 

int main()
{
  auto_ptr<D> ap(new D); 
  X *px = ap.get(); 
  C *pc = ap.get(); 
  //A *pa = ap.get(); 
  //B *pb = ap.get(); 
  return 0; 
}
