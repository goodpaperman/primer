#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 


int main(int argc, char *argv[])
{
  if(argc < 5)
  { 
    cout << "insufficient parameters." << endl; 
    return -1; 
  }
 
  for(int i=0; i<argc; i++)
    cout << argv[i] << endl; 

  cout << endl; 
  return 0; 
}
