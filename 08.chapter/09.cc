
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
  string s; 
  vector<string> svec; 
  //ifstream input; 
  {
    ifstream input("01.cc"); 
    //input.open(it->c_str()); 
    if(!input)
    {
      cout << "open 01.cc error." << endl; 
      //++ it; 
      //continue;
    }
    else 
    {
      cout << "file 01.cc " << endl;  
      while(input >> s)
        svec.push_back(s) ; 
    }
   
    // ++ it; 
    //cout << endl; 
    input.close(); 
    //input.clear();
    cout << input.rdstate() << endl;  
    for(vector<string>::iterator it = svec.begin(); 
        it != svec.end(); ++it)
      cout << *it << endl; 
  }

  return 0; 
}
