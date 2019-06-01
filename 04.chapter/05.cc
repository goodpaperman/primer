#include <iostream> 
#include <string> 
#include <cstring> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 

int main()
{
  cout << "C-style string implementation" << endl; 
  const char *pc = "a very long literal string"; 
  const size_t len = strlen(pc); 
  for(size_t ix=0; ix!=100000000; ++ix)
  {
    char *pc2 = new char[len+1]; 
    strcpy(pc2, pc); 
    if(strcmp(pc2, pc))
      ; 
    delete[] pc2; 
  }

  cout << "string implementation" << endl; 
  string str("a very long literal string"); 
  for(int ix=0; ix!=100000000; ++ix)
  {
    string str2 = str; 
    if(str != str2)
	;
  }

  cout << "test ends." << endl; 
  return 0; 
}
