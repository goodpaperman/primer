#include <iostream> 
#include <string> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 
using std::vector; 

int main()
{
  string str; 
  vector<string *> svec; 
  while(cin >> str)
  {
    string *p = new string(str); 
    svec.push_back(p); 
  }

  vector<string *>::iterator it = svec.begin(); 
  while(it != svec.end())
  {
    cout << "[" << (*it)->size() << "] " 
         << *(*it) << endl; 
    ++ it; 
  }

  cout << endl; 
  for(it = svec.begin(); it != svec.end(); )
  {
    delete *it; 
    it = svec.erase(it); 
  }

  svec.clear(); 
  return 0; 
}
