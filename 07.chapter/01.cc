#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int gcd(int v1, int v2)
{
  while(v2 > 0)
  {
    int tmp = v2; 
    v2 = v1 % v2; 
    v1 = tmp; 
  } 
  
  {
  //  long v1(0); 
  } 

  return v1; 
}

int main()
{
  cout << "Enter two values: " << endl; 
  int i(0), j(0); 
  cin >> i >> j; 
  cout << "gcd: " << gcd(i,j) << endl; 
  return 0; 
}
