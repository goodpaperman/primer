#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

int main()
{
  for(string word; cin >> word; )
    cout << word << " "; 

  cout << endl; 
  int arr[10]; 
  int ix=0; 
  while(ix < 10)
  { 
    cout << arr[ix] << " "; 
    ++ ix; 
  }

  cout << endl;  
  return 0; 
}
