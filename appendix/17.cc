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
  int cnt = 0; 
  char sink[20] = { 0 }; 
  cin.get(sink, 20, 'a'); 
  cout << (cnt = cin.gcount()) << ": "; 
  cout.write(sink, cnt); 
  cout << endl; 
  cin.ignore(1); 
  cin.getline(sink, 20, 'a'); 
  cout << (cnt = cin.gcount()) << ": ";
  cout.write(sink, cnt); 
  cout  << endl; 
  
  return 0;
}

