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
    out << item.book() << " " << item.net_price(1); 
  }

private:
  string isbn; 
protected:
  double price; 
}; 

class Bulk_item : public Item_base {
public:
  Bulk_item(const string &book = "", 
            double sales_price = 0.0, 
            size_t min = 1, 
            double dis = 0.0) : 
            Item_base(book, sales_price), 
            min_qty(min), discount(dis) { } 
  double net_price(size_t n) const {
    if(n >= min_qty)
      return n * (1-discount) * price; 
    else 
      return n * price; 
  }

protected: 
  size_t min_qty; 
  double discount; 
}; 

class Limit_item : public Bulk_item {
public:
  Limit_item(const string &book = "", 
             double sales_price = 0.0, 
             size_t bound = 0, 
             double dis = 0.0) :
             Bulk_item(book, price, bound, dis) { } 
  double net_price(size_t n) const {
    if(n > min_qty)
      return n * price; 
    else
      return n * (1-discount) * price; 
  }
}; 
  
int main(int argc, char **argv)
{
  Item_base item1("0-201-54848-8", 32.3); 
  Bulk_item item2("0-201-82470-1", 40.5); 
  Limit_item item3("0-201-83920-2", 92.23); 

  cout << item1 << endl; 
  cout << item2 << endl; 
  cout << item3 << endl; 
  return 0; 
}
