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

bool find_int(vector<int>::iterator first, 
              vector<int>::iterator last, 
              int element)
{
  for(vector<int>::iterator it = first; 
      it != last; ++it)
    if(*it == element)
      return true; 

  return false; 
}

int main()
{
  int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  vector<int> ivec(a, a+10); 
  //ivec.insert(a, a+10); 
  for(int i=0; i<10; ++i)
  {
    cout << "try to find " << a[i] << ": "
         << find_int(ivec.begin()+2, ivec.end()-3, a[i])
         << endl; 
  }
 
  return 0; 
}
