#include <iostream>
int main()
{
  int v[100]= {0};
  int i=1 ; 
  while(v[i-1] != 100 && i <100)
  {
    std::cin >> v[i++];
  }
 
  for(int j=0; j<i;j++)
  {  
    if(v[j] < 0)
      std::cout << v[j] << ", "; 
  }

  std::cout << std::endl; 
  return 0; 
}
