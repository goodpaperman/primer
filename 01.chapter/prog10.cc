#include <iostream>
int main()
{
  int sum = 0; 
  for(int val = 50; val <= 100; ++val)
    sum += val; 

  std::cout << "Sum of 50 to 100 inclusive is " 
            << sum << std::endl; 
 
  sum = 0; 
  int val = 50; 
  while(val <= 100)
  {
    sum += val; 
    val ++; 
  }

  std::cout << "Sum of 50 to 100 inclusive is " 
            << sum << std::endl; 
  return 0; 
}
