
#include <iostream> 
#include <string> 
#include <vector> 
using std::string;
using std::vector;  
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  vector< vector<int> > ivec; 
  vector<string> svec; 
  vector<string> svec0(10, "null"); 
  
  vector<int> ivec1; 
  vector<int> ivec2(10); 
  vector<int> ivec3(10, 42);
  for(vector<int>::iterator it = ivec3.begin(); it != ivec3.end(); ++it)
    cout << *it << endl; 

  cout << endl;  

  vector<string> svec1; 
  vector<string> svec2(10); 
  vector<string> svec3(10, "hello"); 
  for(vector<string>::iterator it = svec3.begin(); it != svec3.end(); ++it)
    cout << *it << endl; 

  cout << endl; 
  return 0; 
}
