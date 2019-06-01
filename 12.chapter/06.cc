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

typedef string Type; 
Type initVal() { cout << "global one called." << endl; return string("");  }

class Exercise{
public:
  Type setVal(Type); 
  Type initVal() { cout << "local one called." << endl; return string("hello world");  }

private:
  string val; 
}; 

Type Exercise::setVal(Type param){
  val = param + /*::*/initVal(); 
  return val; 
}

int main(int argc, char **argv)
{
  Exercise e; 
  e.setVal("hello world"); 
  return 0; 
}
