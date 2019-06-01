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

void print(list<int>::iterator first, list<int>::iterator last)
{
  while(first != last)
  {
    cout << *first << " "; 
    ++ first; 
  }
  cout << endl; 
}

int main(int argc, char **argv)
{
  int ia[20] = { 0, 9, 1, 8, 2, 7, 3, 6, 4, 5, 5, 5, 6,5, 5, 7,0, 8,0, 9 }; 
  vector<int> ivec(ia, ia+20); 
  sort(ivec.begin(), ivec.end()); 
  list<int> ilist;
  unique_copy(ivec.begin(), ivec.end(), back_inserter(ilist)); 
  print(ilist.begin(), ilist.end()); 
  return 0; 
}
