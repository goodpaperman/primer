#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int factorial(int val)
{
  int ret(val); 
  while(val > 1)
    ret *= --val; 

  return ret; 
}

int main(int argc, char *argv[])
{
  cout << "Enter 1 value: " << endl; 
  int i(0); 
  cin >> i; 
  cout << "factorial is: " << factorial(i) << endl; 
  return 0; 
}
