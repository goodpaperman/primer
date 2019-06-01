
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
  int n = 1; 
  vector<int> ivec(101, 31); 
  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); ++it, ++n) 
  { 
    *it = n; 
  } 

  vector<int>::iterator mid = ivec.begin() + ivec.size()/2;  
  cout << "middle is " << *mid << endl; 
  ivec.push_back(102); 
  cout << "after push_back " << *mid << endl; \
  
  //mid = (ivec.begin() + ivec.end())/2; 
  //cout << "error middle is " << mid << *mid << endl; 
  return 0; 
}
