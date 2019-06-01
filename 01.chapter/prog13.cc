#include <iostream>
int main()
{
  int v1, v2; 
  std::cin >> v1 >> v2; 
  std::cout << "max of " 
            << v1 << " and "
            << v2 << " is " 
            << (v1 >= v2 ?  v1 : v2) 
            << std::endl; 
  return 0; 
}
