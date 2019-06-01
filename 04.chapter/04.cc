#include <iostream> 
#include <string> 
#include <vector> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::vector; 

int main()
{
  int ival; 
  vector<int> vec; 
  while(cin >> ival)
    vec.push_back(ival); 

  int i = 0; 
  int *ia = new int[vec.size()]; 
  for(vector<int>::iterator it = vec.begin(); 
      it != vec.end(); ++it)
    ia[i++] = *it; 

  for(int j=0; j<i; j++)
    cout << ia[j] << " "; 

  cout << endl; 
  delete[] ia; 
  return 0; 
}
