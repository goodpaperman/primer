#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

void exchange(int *v1, int *v2)
{
  int tmp = *v1; 
  *v1 = *v2; 
  *v2 = tmp; 
}

int main()
{
  cout << "Enter two values: " << endl; 
  int i(0), j(0); 
  cin >> i >> j; 
  exchange(&i, &j); 
  cout << "exchange: " << i << " " << j << endl; 
  return 0; 
}
