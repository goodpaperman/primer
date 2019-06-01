#include <iostream> 
#include <string> 
#include <vector> 
#include <cctype> 
#include <cassert> 

using std::cin; 
using std::cout;
using std::cerr;  
using std::endl; 
using std::string; 
using std::vector; 

int main()
{
  cerr << "Error: " << __FILE__ 
       << " : line " << __LINE__ << endl
       << "          Compiled on " << __DATE__
       << " at " << __TIME__ << endl
       << "          Word read was " << "XXX"
       << " : error word." << endl; 
  
  string s; 
  while(cin >> s)
    assert(cin); 

  assert(cin); 
  return 0; 
}
