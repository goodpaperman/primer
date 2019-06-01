#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int pow(int v1, int v2)
{
  int x(1); 
  int y = v2 >= 0 ? v2 : -v2; 
  for(int i=0; i<y; i++)
    x *= v1; 

  if(v2 < 0 && x != 0)
    x = 1/x; 

  return x; 
}

int main()
{
  cout << "Enter two values: " << endl; 
  int i(0), j(0); 
  cin >> i >> j; 
  cout << "pow: " << pow(i,j) << endl; 
  return 0; 
}
