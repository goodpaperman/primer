#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 


int main(int argc, char *argv[])
{
  if(argc < 3)
  { 
    cout << "insufficient parameters." << endl; 
    return -1; 
  }
  
  int i = atoi(argv[1]); 
  int j = atoi(argv[2]); 
  cout << "sum is: " << i + j << endl; 
  return 0; 
}
