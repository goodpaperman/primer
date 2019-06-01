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

class use_ptr{
  friend class has_ptr; 
  int *ip; 
  size_t use; 

  use_ptr(int *p) : ip(p), use(1) {}
  ~use_ptr() { delete ip; }
}; 

class has_ptr{
public:
  has_ptr(int *p, int i) : ptr(new use_ptr(p)), val(i) {}
  has_ptr(const has_ptr &orig) : ptr(orig.ptr), val(orig.val)
         { ++ ptr->use; }
  has_ptr& operator=(const has_ptr& rhs){
    ++ rhs.ptr->use; 
    if(-- ptr->use == 0)
      delete ptr; 
    ptr = rhs.ptr; 
    val = rhs.val; 
    return *this; 
  }

  ~has_ptr() { if(--ptr->use==0) delete ptr; }
  void dump()
    { cout << "val = " << val << " *ptr= " << *ptr->ip << endl; }

private:
  use_ptr *ptr; 
  int val; 
}; 

int main(int argc, char **argv)
{
  int *p = new int(42);
  int *p0 = new int(83);  
  has_ptr p1(p, 10), p2(p1), p3 = p2, p4(p0, 0), p5(p4), p6 = p5; 
  p4 = p1; 
  p5 = p2; 
  p6 = p3; 
  p1.dump(); 
  p2.dump(); 
  p3.dump(); 
  p4.dump(); 
  p5.dump();  
  p6.dump(); 
  return 0; 
}
