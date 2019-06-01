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

class Sales_item{
public:
  double avg_price() const; 
  bool same_isbn(const Sales_item &rhs) const
       { return isbn == rhs.isbn; }
  Sales_item() : units_sold(0), revenue(0.0) { }
private:
  std::string isbn; 
  unsigned units_sold; 
  double revenue; 
}; 

inline double Sales_item::avg_price() const 
{
  if(units_sold)
    return revenue / units_sold; 
  else 
    return 0; 
}

int main(int argc, char **argv)
{
  Sales_item item; 
  cout << "average price = " << item.avg_price() << endl; 
  return 0; 
}
