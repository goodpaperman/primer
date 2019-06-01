
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
  string::size_type punct_cnt = 0;  
  for(string::size_type ix = 0; ix != s.size(); ++ix)
    if(ispunct(s[ix]))
      punct_cnt ++; 

  cout << punct_cnt << " punctuation characters in " << s << endl;
  return 0; 
}
