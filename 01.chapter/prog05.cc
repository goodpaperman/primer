#include <iostream> 

int main()
{
  std::cout << "Enter two numbers:";  
  std::cout << std::endl; 

  int v1, v2; 
  std::cin >> v1 ;
  std::cin >> v2; 
  std::cout << "The multiple of " 
            << v1 << " and " << v2 
            << " is " << v1 *  v2 << std::endl; 
  return 0; 
}
