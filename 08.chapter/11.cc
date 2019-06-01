
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

ifstream &open_file(ifstream &in, const string &file)
{
  in.close(); 
  in.clear(); 
  in.open(file.c_str()); 
  return in; 
}

int main()
{
  string s; 
  vector<string> svec; 
  ifstream input; 
  {
    //ifstream input("01.cc"); 
    open_file(input, "01.cc"); 
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
      while(getline(input, s))
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
