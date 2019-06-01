#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm>
#include <numeric>  
#include <functional> 
#include <utility> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::map; 
using std::multimap; 
using std::set; 
using std::multiset; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

template <typename T>
void print(ostream &os, const T &v)
{
  os << v << endl; 
}

int main(int argc, char **argv)
{
  ostream *os = &cout; 
  ofstream ofs("test.txt"); 
  ostringstream oss; 
  for(int i=0; i<3; ++i)
  {
    print(*os, 1); 
    print(*os, 2.0f); 
    print(*os, 3.1415); 
    if(i == 0)
      os = &ofs; 
    else if(i == 1)
      os = &oss; 
  }

  cout << endl << oss.str(); 
  return 0; 
}
