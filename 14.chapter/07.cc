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

class Ranger{
public:
  Ranger(int l, int u=-1) : lower(l), upper(u) {}
  bool operator() (const string &s)
       { return s.size() >= lower && (upper >= 0 ? s.size() <= upper : 1); }
private:
  int lower, upper; 
}; 

int main(int argc, char **argv)
{
  string story = "the quick red fox jumps over the slow red turtle"; 
  istringstream ss(story); 
  istream_iterator<string> in(ss), eof; 
  ostream_iterator<string> out(cout, " "); 
  vector<string> svec(in, eof); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 

  int l=1, u=4; 
  cout << count_if(svec.begin(), svec.end(), Ranger(l, u))
       << " words in range " << l << " to " << u << endl; 


  l=u, u=10; 
  cout << count_if(svec.begin(), svec.end(), Ranger(l, u))
       << " words in range " << l << " to " << u << endl; 
  return 0; 
}
