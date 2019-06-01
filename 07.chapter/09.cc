#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

//void printValues(int (*ia)[10])
void printValues(int (&ia)[10][10])
{
  for(size_t i=0; i!=10; i++)
  {
    for(size_t j=0; j!=10; j++)
      cout << ia[i][j] << " ";

    cout << endl; 
  }

  cout << endl;  
}

int main()
{
  int i(0), j[2] = { 0, 1}; 
  int k[10][10] = { {0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9} }; 
  int m[1][10] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} };   
  //printValues(&i); 
  //printValues(j); 
  printValues(k); 
  //printValues(m); 
  return 0; 
}
