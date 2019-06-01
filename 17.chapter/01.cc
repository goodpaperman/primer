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

namespace primerLib{
  void compute() { cout << "compute() called" << endl; }
  void compute(const void*) { cout << "compute(const void*) called" << endl; }
}

//using primerLib::compute; 
void compute(int) { cout << "compute(int) called" << endl; }
void compute(double, double = 3.4) { cout << "compute(double, double) called" << endl; }
void compute(char*, char* = 0) { cout << "compute(char*, char*) called" << endl; }

int main()
{
  using primerLib::compute; 
  compute(0); 
  return 0; 
}
