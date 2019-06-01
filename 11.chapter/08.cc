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
  int ia[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  vector<int> ivec(ia, ia+10); 
  list<int> ilist;
  ilist.assign(ivec.begin(), ivec.end());  
  print(ilist.begin(), ilist.end()); 
  replace_copy(ivec.begin(), ivec.end(), front_inserter(ilist), 5, 100); 
  print(ilist.begin(), ilist.end()); 
  ilist.assign(ivec.begin(), ivec.end()); 
  replace_copy(ivec.begin(), ivec.end(), back_inserter(ilist), 7, -2); 
  print(ilist.begin(), ilist.end()); 
  ilist.assign(ivec.begin(), ivec.end()); 
  replace_copy(ivec.begin(), ivec.end(), inserter(ilist, find(ilist.begin(), ilist.end(), 2)), 3, 81);  
  print(ilist.begin(), ilist.end()); 
  return 0; 
}
