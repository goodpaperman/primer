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
  char ca[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k' }; 
  vector<char> cvec(ca, ca+10); 
  string str(cvec.begin(), cvec.end()); 
  cout << str << endl; 
  return 0; 
}
