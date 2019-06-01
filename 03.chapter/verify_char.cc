
#include <iostream> 
#include <string> 
#include <cctype> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  char c; 
  string str; 
  while(getline(cin, str))
  {
    if(str.empty())
       continue; 

    c = str[0]; 
    cout << "char = " << c << endl; 
    cout << "isalnum: " << isalnum(c) << endl; 
    cout << "isalpha: " << isalpha(c) << endl; 
    cout << "iscntrl: " << iscntrl(c) << endl; 
    cout << "isdigit: " << isdigit(c) << endl; 
    cout << "isgraph: " << isgraph(c) << endl; 
    cout << "islower: " << islower(c) << endl; 
    cout << "isprint: " << isprint(c) << endl; 
    cout << "ispunct: " << ispunct(c) << endl; 
    cout << "isspace: " << isspace(c) << endl; 
    cout << "isupper: " << isupper(c) << endl; 
    cout << "isxdigit: " << isxdigit(c) << endl; 
    cout << "tolower: " << tolower(c) << endl; 
    cout << "toupper: " << toupper(c) << endl; 
  }
  return 0; 
}
