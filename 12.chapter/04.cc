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

class Y; 
class X{
public:
  Y* y; 
}; 

class Y{
public:
  X x; 
}; 

int main(int argc, char **argv)
{
  X x; 
  Y y; 
  x.y = &y;
  y.x = x; 
  Y* py = x.y;  
  while(py)
  {
    cout << py << endl; 
    py = py->x.y; 
  }

  return 0; 
}
