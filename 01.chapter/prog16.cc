#include <iostream> 
int main()
{
  std::cout << "Enter two numbers: " << std::endl; 
  int v1, v2; 
  std::cin >> v1 >> v2; 

  int lower, upper; 
  if(v1 <= v2)
  {
    lower = v1; 
    upper = v2; 
  } 
  else 
  { 
     lower = v2; 
     upper = v1; 
  }

  int sum = 0; 
  for(int val = lower; val <= upper; ++val)
  {
     if(val % 10 == 0)
	std::cout << std::endl; 

     std::cout << val << ", "; 
  }

  std::cout << std::endl; 
  return 0; 
}
