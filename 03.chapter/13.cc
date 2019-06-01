
#include <iostream> 
#include <string> 
#include <cctype> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string line; 
  string ret; 
  while(getline(cin, line))
  {
     ret = ""; 
     for(string::size_type ix = 0; ix != line.size(); ix++)
        if(!ispunct(line[ix]))
            ret += line[ix]; 

    if(ret.size() == line.size())
      cout << "no punctuation found in: " << line << endl; 
    else 
      cout << "after remove punctuation: " << ret << endl; 
  }
  return 0; 
}
