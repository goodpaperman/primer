
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
  files.push_back("1.cc"); 
  files.push_back("04.cc"); 

  string s; 
  ifstream input; 
  vector<string>::iterator it = files.begin(); 
  while(it != files.end())
  {
    //ifstream input(it->c_str()); 
    input.open(it->c_str()); 
    if(!input)
    {
      cout << "open " << it->c_str() << " error." << endl; 
      ++ it; 
      continue;
    }

    cout << "file " << it->c_str() << endl;  
    while(input >> s)
      cout << s ; 

    ++ it; 
    //cout << endl; 
    input.close(); 
    //input.clear();
    cout << input.rdstate() << endl;  
  }

  return 0; 
}
