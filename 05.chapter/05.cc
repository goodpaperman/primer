#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

int main()
{
  cout << "sizeof(char) = " << sizeof(char) << endl
       << "sizeof(unsigned char) = " << sizeof(unsigned char) << endl
       << "sizeof(int) = " << sizeof(int) << endl
       << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl
       << "sizeof(long) = " << sizeof(long) << endl
       << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl
       << "sizeof(short) = " << sizeof(short) << endl
       << "sizeof(unsigned short) = " << sizeof(unsigned short) << endl
       << "sizeof(bool) = " << sizeof(bool) << endl
       << "sizeof(float) = " << sizeof(float) << endl
       << "sizeof(double) = " << sizeof(double) << endl; 

  int x[10] = { 0 }; 
  int *p = x; 
  cout << "sizeof(x) / sizeof(*x) = " << sizeof(x)/sizeof(*x) << endl
       << "sizeof(p) / sizeof(*p) = " << sizeof(p)/sizeof(*p) << endl; 

  string s = "world"; 
  s = s + (s[s.size()-1] == 's' ? "" : "s"); 
  cout << s << endl; 

  int *pi = new int(1024); 
  cout << *pi << endl; 
  delete pi; 

  pi = new int; 
  cout << *pi << endl; 
  delete pi; 

  pi = new int(); 
  cout << *pi << endl; 
  delete pi; 

  const int *cpi = new const int(1024); 
  cout << *cpi << endl; 
  delete cpi; 

  return 0; 
}
