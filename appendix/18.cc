#include <iostream>
#include <istream>  
#include <iomanip> 
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
#include <cmath> 

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


int main()
{
  fstream inout("input.txt", fstream::ate | fstream::in | fstream::out); 
  if(!inout)
  {
    cerr << "Unable to open file !" << endl; 
    return EXIT_FAILURE; 
  }

  ifstream::pos_type end_mark = inout.tellg(); 
  inout.seekg(0, fstream::beg); 
  int cnt = 0; 
  string line; 
  while(inout && inout.tellg() != end_mark
              && getline(inout, line))
  {
    cnt += line.size() + 1; 
    ifstream::pos_type mark = inout.tellg(); 
    inout.seekp(0, fstream::end); 
    inout << cnt << " "; 
    inout.seekg(mark); 
  }

  inout.clear(); 
  inout.seekp(0, fstream::end); 
  inout << endl; 


  return 0;
}

