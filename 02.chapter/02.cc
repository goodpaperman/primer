#include <iostream> 
int main()
{
  int value, pow;
  std::cin >> value >> pow;  
  int result = 1; 
  for(int cnt = 0; cnt != pow; ++cnt)
    result *= value; 

  std::cout << value 
            << " raised to the power of " 
            << pow << ": \t" 
            << result << std::endl; 

  char _; 
  float Float = 3.14f; 
//int and = 1;   
  return 0; 
}
