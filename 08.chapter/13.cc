
#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <string> 

using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl;
using std::ifstream; 
using std::istringstream;  
using std::ostringstream; 
using std::vector; 
using std::string; 

int main()
{
  string line, word; 
  ifstream input("01.cc"); 
  while(getline(input, line))
  {
    istringstream stream(line); 
    while(stream >> word)
      cout << word << " "; 
    cout << endl; 
  }

  return 0; 
}
