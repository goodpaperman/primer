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

class EQ{
public:
  EQ(int val) : bound(val) {}
  bool operator() (int val)
       { return val == bound; }
private:
  int bound; 
}; 

int main(int argc, char **argv)
{
  int ia[10] = { 2, 3, 4, 2, 7, 2, 9 , 8, 0, 6 }; 
  vector<int> ivec(ia, ia+10); 
  int val; 
  while(cin >> val)
  {
    replace_if(ivec.begin(), ivec.end(), EQ(val), 0); 
    copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " ")); 
    cout << endl; 
  }

  return 0; 
}
