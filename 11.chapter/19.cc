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


int main(int argc, char **argv)
{
  string line("FIRST,MIDDLE,LAST"); 
  cout << string(line.begin(), find(line.begin(), line.end(), ',')) << endl; 
  cout << string(line.rbegin(), find(line.rbegin(), line.rend(), ',')) << endl; 
  string::reverse_iterator rcomma = find(line.rbegin(), line.rend(), ','); 
  cout << string(rcomma.base(), line.end()) << endl; 
  cout << string(find(line.rbegin(), line.rend(), ',').base(), line.end()) << endl; 

  return 0; 
}
