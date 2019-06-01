#include <iostream> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 

class Foo
{
public:
  Foo(int i) { i_ = i; }  
  int i_; 
}; 

int main()
{
  vector<Foo> emtpy; 
  //vector<Foo> bad(10); 
  vector<Foo> ok(10, 1); 
  return 0; 
}
