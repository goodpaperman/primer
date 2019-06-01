#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

void printValues(const int ia[10])
{
  for(size_t i=0; i!=10; i++)
    cout << ia[i] << endl;

  cout << endl;  
}

int main()
{
  int i(0), j[2] = { 0, 1}; 
  printValues(&i); 
  printValues(j); 
  return 0; 
}
