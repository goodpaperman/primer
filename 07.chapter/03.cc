#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

//int abs(int v1)
int abs(const int v1)
{
  return v1 >= 0 ? v1 : -v1; 
}

//int abs(int v1)
//{
//  return 0; 
//}

int main()
{
  cout << "Enter two values: " << endl; 
  int i(0), j(0); 
  cin >> i >> j; 
  cout << "abs: " << abs(i) << " " << abs(j) << endl; 
  return 0; 
}
