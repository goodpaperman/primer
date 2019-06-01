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
  istream_iterator<int> in_inter(cin), eof;
  ostream_iterator<int> out_inter(cout, " "); 
  vector<int> ivec(in_inter, eof); 
  copy(ivec.begin(), ivec.end(), out_inter);
  cout << endl;  
  sort(ivec.begin(), ivec.end()); 
  copy(ivec.begin(), ivec.end(), out_inter); 
  cout << endl; 
  unique_copy(ivec.begin(), ivec.end(), out_inter); 
  cout << endl; 
  return 0; 
}
