#include <iostream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque; 

int main()
{
  //vector<int> ivec(3, 42); 
  vector<int> ivec; 
  //cout << "first element by [] = " << ivec[0] << endl; 
  //cout << "first element by front() = " << ivec.front() << endl; 
  //cout << "first element by *begin() = " << *ivec.begin() << endl; 
  cout << "first element by at() = " << ivec.at(0) << endl; 
  return 0; 
}
