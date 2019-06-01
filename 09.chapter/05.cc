#include <iostream> 
#include <vector> 
#include <list> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 
using std::list; 
using std::string; 

vector<int>::iterator find_int(
              vector<int>::iterator first, 
              vector<int>::iterator last, 
              int element)
{
  for(vector<int>::iterator it = first; 
      it != last; ++it)
    if(*it == element)
      return it; 

  return last; 
}

int main()
{
  string str; 
  vector<string> svec; 
  while(cin >> str) 
    svec.push_back(str); 

  for(vector<string>::iterator it = svec.begin(); 
      it != svec.end(); ++it)
    cout << *it << endl; 

  return 0; 
}
