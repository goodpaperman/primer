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
  string str("ab2c3d7R4E6"); 
  string numbers("0123456789"); 
  string alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
  cout << "find all the number in " << str << endl; 
  string::size_type pos = 0; 
  while((pos = str.find_first_of(numbers, pos)) != string::npos)
  {
    cout << "[" << pos << "]= " << str[pos] << endl; 
    ++ pos; 
  }

  cout << "find all the alpha in " << str << endl; 
  pos = 0; 
  while((pos = str.find_first_of(alpha, pos)) != string::npos)
  {
    cout << "[" << pos << "]" << str[pos] << endl; 
    ++ pos; 
  }

  return 0; 
}
