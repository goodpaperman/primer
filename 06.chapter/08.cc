#include <iostream> 
#include <string> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 
using std::vector; 

int main()
{
  do 
  {
    int v1, v2; 
    cout << "Please enter two numbers to sum: " << endl; 
    cin >> v1 >> v2; 
    if(cin) 
      cout << "Sub is: " << v1+v2 << endl; 

  }while(cin); 

  return 0; 
}
