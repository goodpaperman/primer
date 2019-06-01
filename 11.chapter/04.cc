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
  int val; 
  vector<int> ivec; 
  //while(cin >> val)
  //  ivec.push_back(val); 

  //fill_n(ivec.begin(), ivec.size(), 0); 
  fill_n(back_inserter(ivec), 10, 42); 
  for(int i=0; i<ivec.size(); ++i)
    cout << ivec[i] << endl; 
  return 0; 
}
