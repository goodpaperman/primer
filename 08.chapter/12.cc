
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 

using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl;
using std::istringstream;  
using std::ostringstream; 
using std::vector; 
using std::string; 

int main()
{
  int val1=512,val2=1024; 
  ostringstream format_message; 
  format_message << "val1: " << val1 << "\n"
                 << "val2: " << val2 << "\n"; 

  cout << format_message.str() << endl; 
  istringstream input_istring(format_message.str()); 
  string dump; 
  input_istring >> dump >> val1 >> dump >> val2; 
  cout << val1 << " " << val2 << endl; 
  return 0; 
}
