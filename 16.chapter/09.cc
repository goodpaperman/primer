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
#include "CheckedPtr.h" 

int main(int argc, char **argv)
{
  int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  CheckedPtr<int> ptr(arr, arr+10); 
  for(int i=0; i<10; ++i)
    ptr ++; 

  -- ptr; 
  ++ ptr; 
  ptr --; 
  return 0;
}
