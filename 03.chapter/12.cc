
#include <iostream> 
#include <string> 
#include <cctype> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string str, total; 
  while(cin >> str)
  { 
    total += str + " " ; 
  } 

  cout << "total is: " << total << endl; 
  return 0; 
}
