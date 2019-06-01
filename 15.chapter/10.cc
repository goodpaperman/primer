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
                 isbn(book), price(sales_price) {}

protected:
  string isbn; 
  double price; 
}; 

class Disc_item : public Item_base {
public:
  Disc_item(const string &book = "", 
            double sales_price = 0.0, 
            size_t qty = 0, 
            double disc_rate = 0.0) : 
                 Item_base(book, sales_price), 
                 quantity(qty), discount(disc_rate) { }
  
  virtual double net_price(size_t) const = 0; 

protected:
  size_t quantity; 
  double discount; 
}; 

class Bulk_item : public Disc_item {
public:
  Bulk_item(const string &book = "", 
            double sales_price = 0.0, 
            size_t qty = 0, 
            double disc_rate = 0.0) :
            Disc_item(book, sales_price, qty, disc_rate) { }

  double net_price(size_t) const { return 0.0; } 
}; 

int main(int argc, char **argv)
{
  Bulk_item item("0-201-82470-1", 50, 5, .19); 
  //Disc_item disc; 
  return 0; 
}
