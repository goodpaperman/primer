
#include <iostream> 
#include <fstream> 
#include <vector> 
#include <string> 

using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl;
using std::ifstream;  
using std::vector; 
using std::string; 

int main()
{
  vector<string> files; 
  files.push_back("01.cc"); 
  files.push_back("02.cc"); 
  files.push_back("03.cc"); 

  string s; 
  vector<string>::iterator it = files.begin(); 
  while(it != files.end())
  {
    ifstream input(it->c_str()); 
    if(!input)
      break;

    cout << "file " << it->c_str() << endl;  
    while(input >> s)
      cout << s ; 

    ++ it; 
    cout << endl; 
  }

  return 0; 
}
