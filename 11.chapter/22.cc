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
  int ia[10] = { 1 , 3, 5, 6, 0, 7, 2, 4, 9, 1 }; 
  vector<int> ivec(ia, ia+10); 
  list<int> ilist(ivec.rbegin()+3, ivec.rbegin()+8); 
  copy(ilist.begin(), ilist.end(), ostream_iterator<int>(cout, " "));  
  return 0; 
}
