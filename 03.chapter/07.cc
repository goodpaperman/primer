
#include <iostream> 
#include <string> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string phrase = "Hello World"; 
  for(string::size_type ix = 0; ix != phrase.size(); ++ix)
    cout << phrase[ix] << endl; 

  return 0; 
}
