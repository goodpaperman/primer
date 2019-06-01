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
  int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  vector<int> ivec(a, a+10); 
  list<int> ilist(a, a+10); 
  vector<int> tmp(ilist.begin(), ilist.end()); 
  cout << "ivec == ilist ? " << (ivec == tmp) << endl; 
  return 0; 
}
