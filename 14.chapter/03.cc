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

class shorter{
public:
  shorter() {}
  bool operator() (const string &s1, const string &s2)
       { return s1.size() < s2.size(); } 
}; 

class GT{
public:
  GT(int val) : bound(val) {}
  bool operator() (const string &s)
       { return s.size() >= bound; }
private:
  int bound; 
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
  sort(svec.begin(), svec.end()); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 
  vector<string>::iterator it = unique(svec.begin(), svec.end()); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 
  svec.erase(it, svec.end()); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 
  stable_sort(svec.begin(), svec.end(), shorter()); 
  copy(svec.begin(), svec.end(), out); 
  cout << endl; 

  for(int i=0; i!=11; ++i)
    cout << count_if(svec.begin(), svec.end(), GT(i))
         << " words " << i << " characters or longer" << endl; 

  return 0; 
}
