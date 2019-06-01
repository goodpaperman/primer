#include <iostream> 
#include <string> 

std::string s1 = "hello"; 
int main()
{
  std::string s2 = "world"; 
  std::cout << s1 << " " << s2 << std::endl; 
  int s1 = 42; 
  std::cout << s1 << " " << s2 << std::endl;

  //const int buf; 
  int cnt = 0; 
  const int sz = cnt; 

  int ival = 1024; 
  int &refVal = ival; 
  //int &refVal2 = 10; 
  //int &refVal3; 

  const int ival2 = 1024; 
  const int &refVal4 = ival2;
  //int &refVal5 = ival2; 
  const int &refVal6 = ival;  
  const int &refVal7 = 42; 
  const int &refVal8 = ival + 1;   

  enum open_modes { input, output, append }; 
  //open_modes mode = 1;   
  open_modes mode = input; 
  mode = (open_modes)1;  
  return 0; 
}
