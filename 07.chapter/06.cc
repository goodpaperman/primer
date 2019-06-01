#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

void ptrswap(int *&pi, int *&pj)
{
  int* tmp = pi; 
  pi = pj; 
  pj = tmp; 
}

int main()
{
  int i(10), j(20); 
  int *pi(&i), *pj(&j); 
  cout << "before swap: " << *pi << " " << *pj << endl; 
  ptrswap(pi, pj); 
  cout << "after swap: " << *pi << " " << *pj << endl; 
  return 0; 
}
