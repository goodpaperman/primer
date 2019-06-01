#include <iostream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <algorithm> 
#include <utility> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::priority_queue; 
using std::pair; 

int main()
{
  string str; 
  int val; 
  vector<pair<string, int> > pvec; 
  while(cin >> str >> val)
  {
    pvec.push_back(make_pair(str, val)); 
  }
  
  for(vector<pair<string, int> >::iterator it = pvec.begin(); 
      it != pvec.end(); ++it)
    cout << it->first << ", " << it->second << endl; 

  return 0; 
}
