#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 


int main()
{
  typedef int func(int*, int); 
  void f1(func); 
  //func f2(int); 
  func *f3(int); 
  return 0; 
}
