#include <iostream> 
#include <string> 
#include <cstring> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 

int main()
{
  string str; 
  cin >> str; 
  char *pstr = new char[str.size()+1]; 
  strcpy(pstr, str.c_str()); 
  cout << pstr << endl; 
  delete[] pstr; 
  return 0; 
}
