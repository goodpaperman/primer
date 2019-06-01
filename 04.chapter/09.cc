#include <iostream> 
#include <vector> 
#include <string> 
#include <cstring> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::vector; 
using std::string; 

int main()
{
  string str; 
  vector<string> strvec; 
  while(cin >> str)
    strvec.push_back(str); 

  int i=0; 
  char **ppstr = new char *[strvec.size()]; 
  for(vector<string>::iterator it = strvec.begin(); 
      it != strvec.end(); ++it)
  {
    ppstr[i] = new char[it->size()+1]; 
    strcpy(ppstr[i], it->c_str());
    ++i; 
  }

  for(int j=0; j<i; j++)
  {
    cout << ppstr[j] << endl; 
    delete[] ppstr[j]; 
  }

  delete[] ppstr; 
  return 0; 
}
