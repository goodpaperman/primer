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

class Item_base {
public:
  Item_base(const string &book = "", 
            double sales_price = 0.0) : 
            isbn(book), price(sales_price) { }
  string book() const { return isbn; }
  virtual double net_price(size_t n) const
           { return n * price; }
  virtual ~Item_base() { }
  friend ostream& operator<<(ostream& out, const Item_base &item) {
    out << item.book();
    out  << " "; 
    out  << item.net_price(1); 
    return out; 
  }

private:
  string isbn; 
protected:
  double price; 
}; 

int main(int argc, char **argv)
{
  Item_base item1("0-201-54848-8", 32.3); 
  Item_base item2("0-201-82470-1", 40.5); 

  cout << item1 << endl; 
  cout << item2 << endl; 

  return 0; 
}
