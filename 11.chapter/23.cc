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
  string sa[10]; 
  const vector<string> file_names(sa,sa+6); 
  vector<string>::const_iterator it = file_names.begin()+2; 
  
  vector<int> ivec; 
  fill(ivec.begin(), ivec.end(), 0); 

  const vector<int> ivec1; 
  sort(ivec.begin(), ivec.end());  
  return 0; 
}
