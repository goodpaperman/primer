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
  int arr[10] = { 0, 1, 1, 2, 3, 5, 8 }; 
  vector<int> ivec1(arr, arr+10); 
  vector<int> ivec2(arr, arr+5);

  for(vector<int>::iterator it1 = ivec1.begin(), 
      it2 = ivec2.begin(); 
      it1 != ivec1.end(), it2 != ivec2.end(); 
      ++ it1, ++ it2) 
  { 
    cout << "compare " << *it1 << " with " << *it2 << endl; 
    if(*it1 != *it2)
      return 1; 
  }
 
  cout << "vector is a prefix of another vector." << endl; 

  return 0; 
}
