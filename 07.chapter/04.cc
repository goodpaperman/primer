#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int max(int v1, const int *v2)
{
  return (v1 >= *v2) ? v1 : *v2; 
}

int main()
{
  cout << "Enter two values: " << endl; 
  int i(0), j(0); 
  cin >> i >> j; 
  cout << "max: " << max(i, &j) << endl; 
  return 0; 
}
