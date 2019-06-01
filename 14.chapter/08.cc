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

int main(int argc, char **argv)
{
  string story = "the quick red fox jumps over the slow red turtle"; 
  istringstream ss(story); 
  istream_iterator<string> in(ss), eof; 
  ostream_iterator<string> out(cout, " "); 
  vector<string> svec(in, eof); 
  sort(svec.begin(), svec.end()); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 

  string val; 
  while(cin >> val)
  {
    vector<string>::iterator it = find_if(svec.begin(), svec.end(), 
                                  bind2nd(greater<string>(), val)); 
    if(it != svec.end())
      cout << "first string > " << val << " is " << *it << endl; 
  }

  return 0; 
}
