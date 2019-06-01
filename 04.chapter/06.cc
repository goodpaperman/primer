#include <iostream> 
#include <string> 
#include <cstring> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 

int main()
{
  const char *pstr1 = "One World, "; 
  const char *pstr2 = "One Dream."; 
  char pstr[1024] = { 0 }; 
  strcpy(pstr, pstr1); 
  strcat(pstr, pstr2); 
  cout << pstr << endl; 
 
  string str1("One Dream, "); 
  string str2("One World."); 
  string str = str1 + str2; 
  cout << str << endl;  

  const char *p = str.c_str(); 
  cout << p << endl; 
  return 0; 
}
