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

class Foo{
public:
  Foo(int i) : i_(i) {}
  int i() { return i_; }

private:
  int i_; 
}; 

class Bar{
public:
  static int FooVal() { ++i_; return f_.i(); }
  static int callsFooVal() { return i_; }
  static int i_; 
  static Foo f_; 
}; 

int Bar::i_ = 20; 
Foo Bar::f_(0); 

int main(int argc, char **argv)
{
  Foo f(0); 
  cout << f.i() << endl; 
  Bar b; 
  cout << b.f_.i() << endl;
  cout << Bar::FooVal() << endl;  
  cout << Bar::callsFooVal() << endl; 
  return 0; 
}
