#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

typedef int int4[4]; 

int main()
{
  int ia[3][4] =
  {
    {0, 1, 2, 3}, 
    {4, 5, 6, 7}, 
    {8, 9, 10, 11}
  }; 

  int ib[3][4] = 
  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }; 

  int ic[3][4]; 
  for(size_t i=0; i!=3; ++i)
    for(size_t j=0; j!=4; ++j)
      ic[i][j] = i*4+j; 

  for(int4 *p = ia; p!=ia+3; ++p)
    for(int *q = *p; q!=*p+4; ++q)
      cout << *q << " "; 

  cout << endl; 
  for(int (*p)[4] = ib; p!=ib+3; ++p)
    for(int *q = *p; q!=*p+4; ++q)
      cout << *q << " "; 
 
  cout << endl;   
  for(size_t i=0; i!=3; ++i)
    for(size_t j=0; j!=4; ++j)
      cout << ic[i][j] << " "; 

  cout << endl; 
  return 0; 
}
