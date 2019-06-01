
#include <iostream> 
#include <string> 
#include <cctype> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string s("Hello World!!!");
  for(string::size_type ix = 0; ix != s.size(); ++ix)
    s[ix] = tolower(s[ix]); 

  cout << s << endl; 
  return 0; 
}
