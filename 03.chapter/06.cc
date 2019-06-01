
#include <iostream> 
#include <string> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string substr = "Hello"; 
  string phrase = "Hello World"; 
  string slang = "Hiya"; 
  if(substr < phrase)
     cout << substr << " < " << phrase << endl; 

  if(slang > phrase) 
     cout << slang << " > " << phrase << endl; 
  return 0; 
}
