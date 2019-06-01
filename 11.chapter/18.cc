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
  istream_iterator<string> in_iter(cin), eof;
  ostream_iterator<string> out_iter(cout, " "); 
  vector<string> svec(in_iter, eof); 
  sort(svec.rbegin(), svec.rend()); 
  copy(svec.begin(), svec.end(), out_iter);
  cout << endl;  
  unique_copy(svec.begin(), svec.end(), out_iter); 
  cout << endl; 
  return 0; 
}
