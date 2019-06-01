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
#include "ListQueue.h" 

int main(int argc, char **argv)
{
  ListQueue<int> qi; 
  qi.push(1); 
  cout << qi << endl; 
  qi.push(2); 
  cout << qi << endl; 
  qi.pop(); 
  cout << qi << endl; 
  qi.pop(); 
  cout << qi << endl;
  cin >> qi; 
  cout << qi << endl;  
  cin >> qi; 
  cout << qi << endl;  

  vector<int> ivec; 
  for(int i=0; i<10; ++i)
    ivec.push_back(i+1); 

  ListQueue<int> qi2(ivec.begin(), ivec.end()); 
  cout << qi2 << endl;

  qi2.assign(ivec.begin(), ivec.end()); 
  cout << qi2 << endl; 
  return 0;
}
