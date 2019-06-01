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

int display(const int &v1)
{
  cout << v1 << " "; 
  return 0; 
}

class multiply {
public:
  int operator()(const int &v1, const int &v2)
  { return v1 * v2; }
}; 


int main()
{
  int isrc[4] = { 1, 2, 3, 3 };  
  int idest[4] = { 1, 2, 3, 4 }; 
  int iset[8] = { 0 }; 
  
  cout << "source is: " << endl; 
  for_each(isrc, isrc+4, display); 
  cout << endl; 

  cout << "dest is: " << endl; 
  for_each(idest, idest+4, display); 
  cout << endl; 

  int sum = accumulate(isrc, isrc+4, 0); 
  cout << "sum of source is: " << sum << endl; 
  sum = accumulate(idest, idest+4, 1, multiply()); 
  cout << "multiply of dest is: " << sum << endl; 

  sum = inner_product(isrc, isrc+4, idest, 0); 
  cout << "inner product of source & dest is: " << sum << endl; 
  sum = inner_product(isrc, isrc+4, idest, 1, multiply(), multiply()); 
  cout << "inner product(multiply) of source & dest is: " << sum << endl; 

  int *pos  = partial_sum(isrc, isrc+4, idest); 
  cout << "after partial sum: " << endl; 
  for_each(idest, pos, display); 
  cout << endl; 

  pos = partial_sum(isrc, isrc+4, idest, multiply()); 
  cout << "after partial sum(multiply): " << endl; 
  for_each(idest, pos, display); 
  cout << endl; 

  pos = adjacent_difference(isrc, isrc+4, idest); 
  cout << "after adjacent difference: " << endl; 
  for_each(idest, pos, display); 
  cout << endl; 

  pos = adjacent_difference(isrc, isrc+4, idest, multiply()); 
  cout << "after adjacent difference(multiply): " << endl; 
  for_each(idest, pos, display); 
  cout << endl; 

  return 0;
}

