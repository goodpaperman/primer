#include <iostream> 
#include <string> 
#include <cstring> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 

typedef struct tagABC
{
  int a; 
  float b; 
  bool c; 
}ABC; 

int main()
{
  char ca[] = { 'C', '+', '+' }; 
  int terminal = 0xffff; 
  cout << ca << " = " << strlen(ca) << endl; 
  //char buf[1024] = { 0 }; 
  //cin >> buf; 
  //cout << "input: " << buf << endl; 
  int *pia = new int[10]; 
  for(int i=0; i<10; i++)
    cout << pia[i] << endl; 

  delete[] pia; 
  pia = new int[10](); 
  for(int i=0; i<10; i++)
    cout << pia[i] << endl; 

  delete[] pia; 
  ABC *abc = new ABC[10]; //(); 
  for(int i=0; i<10; i++)
    cout << abc[i].a << ", " 
         << abc[i].b << ", " 
         << abc[i].c << ". " 
         << endl; 

  delete[] abc; 
  
  const int *pci = new const int[100](); 
  const string *pstr = new const string[100]; 
  delete[] pstr; 
  delete[] pci; 

  int *p = new int[0]; 
  for(int *q = p; q != p+0; ++q)
    cout << *q << endl; 

  delete[] p; 
  return 0; 
}
