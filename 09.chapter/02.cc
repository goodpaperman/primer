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

int main()
{
  string str; 
  list<string> slist; 
  while(cin >> str)
    slist.push_back(str); 

  list<string>::iterator it = slist.end(); 
  while(-- it != slist.begin())
    cout << *it << endl; 

  cout << *it << endl; 

  const vector<int> ivec(10); 
  vector<int>::const_iterator iter = ivec.begin(); 
  vector<int>::const_iterator iter2 = &ivec[0];  
  return 0; 
}
