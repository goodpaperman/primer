#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

bool str_subrange(const string &str1, const string &str2)
{
  if(str1.size() == str2.size())
    return str1 == str2; 
 
  string::size_type size = (str1.size() < str2.size()) 
                           ? str1.size() : str2.size(); 
  string::size_type i; 
  while(i != size)
    if(str1[i] != str2[i])
      return false; 

  return true;   
}

int main()
{
  string str1("abcd"), str2("efgh"), str3("abcde"); 
  cout << str1 << (str_subrange(str1, str2) 
      ? " is a subrange of " 
      : " not a subrange of ") <<  str2 << endl; 

  cout << str1 << (str_subrange(str1, str3) 
      ? " is a subrange of " 
      : " not a subrange of ") << str3 << endl;  

  return 0; 
}
