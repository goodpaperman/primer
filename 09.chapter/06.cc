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
  list<string> slist; 
  while(cin >> str) 
    slist.push_back(str); 

  for(list<string>::iterator it = slist.begin(); 
      it != slist.end(); ++it)
    cout << *it << endl; 

  return 0; 
}
