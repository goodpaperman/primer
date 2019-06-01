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

//protected:
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
  double total = 0; 
  vector<Item_base> base_vec; 
  base_vec.push_back(Item_base("hello", 100)); 
  base_vec.push_back(Bulk_item("world", 20, 1, 0.14)); 
  for(vector<Item_base>::iterator it = base_vec.begin(); 
      it != base_vec.end(); ++it)
  {
    total += it->price; 
  }

  cout << "total is: " << total << endl;
  total = 0; 
  vector<Item_base*> pbase_vec; 
  pbase_vec.push_back(&base_vec[0]);  
  pbase_vec.push_back(&base_vec[1]); 
  for(vector<Item_base*>::iterator it = pbase_vec.begin(); 
      it != pbase_vec.end(); ++it)
  {
    total += (*it)->price; 
  }

  cout << "total is " << total << endl; 
  return 0; 
}
