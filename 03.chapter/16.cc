
#include <iostream> 
#include <string> 
#include <vector> 
#include <cctype> 
using std::string;
using std::vector;  
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string st; 
  vector<string> svec; 
  while(cin >> st)
     svec.push_back(st); 

  cout << "string vector size: " << svec.size() << endl; 
  for(vector<string>::size_type ix = 0; ix != svec.size(); ix++)
  {
    for(string::size_type iy = 0; iy != svec[ix].size(); iy++)
       svec[ix][iy] = tolower(svec[ix][iy]); 
    
    cout << svec[ix] << ", " ; 
    if((ix + 1) % 8 == 0)
      cout << endl; 
  }

  cout << endl; 
  return 0; 
}
