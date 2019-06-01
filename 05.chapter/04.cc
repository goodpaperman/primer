#include <iostream> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 

int main()
{
  int a=0, b=0; 
  cin >> a >> b; 
  cout << "the min one is: " << (a < b ? a : b) << endl; 

  vector<int> ivec;
  ivec.push_back(a); 
  ivec.push_back(b); 
  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); ++it)
  { 
    if(*it % 2 != 0)
      *it *= 2; 
    cout << *it << " "; 
  }

  cout << endl; 
  return 0; 
}
