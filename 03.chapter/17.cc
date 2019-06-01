
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
  vector<int> ivec(10, 42); 
  for(vector<int>::iterator iter = ivec.begin(); 
                            iter != ivec.end(); ++iter)
  { 
    *iter *= 2; 
  } 

  for(vector<int>::const_iterator iter = ivec.begin(); 
                                  iter != ivec.end(); ++iter)
  { 
    cout << *iter << ", "; 
  } 

  cout << endl; 
  return 0; 
}
