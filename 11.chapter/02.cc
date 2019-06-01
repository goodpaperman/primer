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
  string val; 
  list<string> ilist; 
  while(cin >> val)
    ilist.push_back(val); 

  cout << "input value to count: " << endl; 
  cin.clear(); 
  cin >> val; 
  int num = count(ilist.begin(), ilist.end(), val); 
  cout << "occurs " << num << " time(s)." << endl; 
  return 0; 
}
