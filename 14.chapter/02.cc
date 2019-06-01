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

struct absInt{
  int operator()(int val){
    return val < 0 ? -val : val; 
  }
  int operator()(bool con, int val1, int val2){
    return con ? val1 : val2; 
  }
};

int main(int argc, char **argv)
{
  absInt absObj; 
  int i = absObj(-1); 
  cout << i << endl; 
  cout << absObj(i%2, 3, -3) << endl; 
  return 0; 
}
