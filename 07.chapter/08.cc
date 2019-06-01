#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

void printValues(const int (&ia)[10])
{
  for(size_t i=0; i!=10; i++)
    cout << ia[i] << endl;

  cout << endl;  
}

int main()
{
  int i(0), j[2] = { 0, 1}; 
  int k[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  //printValues(&i); 
  //printValues(j); 
  printValues(k); 
  return 0; 
}
