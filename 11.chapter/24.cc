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
  string line("the quick red fox jumps over the slow red turtle"); 
  istringstream stream(line); 
  istream_iterator<string> in_iter(stream), eof; 
  ostream_iterator<string> out_iter(cout, " "); 
  list<string> slist(in_iter, eof); 
  copy(slist.begin(), slist.end(), out_iter); 
  cout << endl; 
  slist.sort(); 
  copy(slist.begin(), slist.end(), out_iter); 
  cout << endl; 
  slist.unique();
  copy(slist.begin(), slist.end(), out_iter); 
  cout << endl;  
  return 0; 
}
