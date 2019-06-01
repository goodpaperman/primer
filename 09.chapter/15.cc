#include <iostream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <algorithm> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque; 

int main()
{
  vector<int> ivec; 
  cout << "size = " << ivec.size() 
       << " capacity = " << ivec.capacity() << endl; 

  for(int i=0; i<24; ++i)
    ivec.push_back(i); 

  cout << "size = " << ivec.size()
       << " capacity = " << ivec.capacity() << endl; 

  ivec.reserve(50); 
  cout << "size = " << ivec.size()
       << " capacity = " << ivec.capacity() << endl; 

  while(ivec.size() != ivec.capacity())
    ivec.push_back(0); 

  cout << "size = " << ivec.size()
       << " capacity = " << ivec.capacity() << endl; 

  ivec.push_back(42); 
  cout << "size = " << ivec.size()
       << " capaicty = " << ivec.capacity() << endl;

  ivec.resize(12); 
  cout << "size = " << ivec.size()
       << " capacity = " << ivec.capacity() << endl;  
  return 0; 
}
