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
  const size_t array_size = 7; 
  int ia1[] = { 0, 1, 2, 3, 4, 5, 6 }; 
  int ia2[array_size] = { 0 }; 
  for(size_t ix = 0; ix != array_size; ++ix)
    ia2[ix] = ia1[ix]; 

  cout << ia2[0] << endl; 
  ia2[6] = 1; 
  vector<int> ivec(7, 20); 
  vector<int> ivec2(ivec); 
  cout << ivec2[0] << endl;
  
  ivec2[6] = 1; 
  for(size_t ix = 0; ix != array_size; ++ix)
    if(ia2[ix] != ia1[ix])
      cout << "element unsame at " << ix << " = " << ia1[ix] << " and " << ia2[ix] << endl; 

  if(ivec != ivec2)
    cout << "unsame vector ivec1 && ivec2" << endl;  

  int ia3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  return 0;
}
