#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

void string_copy(char *)
{
}

int main()
{
  const char *pcstr = 0; 
  string_copy(const_cast<char *>(pcstr)); 

  int i = 0xffff; 
  int *ip = &i; 
  char *pc = reinterpret_cast<char *>(ip); 
  string str(pc); 
  cout << str << endl; 
  return 0; 
}
