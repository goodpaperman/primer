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

  virtual Item_base* clone() const
    { return new Item_base(*this); }

  virtual void debug() const
  { 
    if(debug_)
      cout << "isbn = " << isbn << endl 
         << "price = " << price << endl; 
  }

  virtual double net_price(size_t n) const { return price * n; }
  string book() const { return isbn; }
  double value() const { return price; }

protected:
  bool debug_; 
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

  virtual Disc_item* clone() const
    { return new Disc_item(*this); }

  virtual void debug() const 
  { 
    if(debug_)
      cout << "quantity = " << quantity << endl
           << "discount = " << discount << endl; 
  }

  virtual double net_price(size_t n) const
    { return Item_base::net_price(n); } 

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

  virtual Bulk_item* clone() const
    { return new Bulk_item(*this); }

  virtual void debug() const 
  { 
    if(debug_)
      cout << "nothing " << endl; 
  }

  double net_price(size_t n) const { return price * n * 2 / 3; } 
}; 

class Sales_item
{
public:
  Sales_item() : p(0), use(new int(1)) {}
  Sales_item(const Sales_item& item) :
    p(item.p), use(item.use) 
    { ++*use; }
  Sales_item(const Item_base& base) :
    p(base.clone()), use(new int(1)) {}
  ~Sales_item() { decr_use(); }
  Sales_item& operator=(const Sales_item& item)
  {
    ++*item.use; 
    decr_use(); 
    p = item.p; 
    use = item.use; 
    return *this; 
  }

  const Item_base* operator->() const
  {
    if(p)
      return p; 
    else 
      throw std::logic_error("empty pointer"); 
  }

  const Item_base& operator*() const
  {
    if(p)
      return *p; 
    else 
      throw std::logic_error("empty pointer"); 
  }


protected:
  void decr_use()
  { 
    if(--*use == 0)
    {
      delete p; 
      delete use; 
    }
  }

protected:
  Item_base *p; 
  int *use; 
}; 

inline bool compare(const Sales_item &lhs, const Sales_item &rhs)
  { return lhs->book() < rhs->book(); }


class Basket {
  typedef bool (*Comp)(const Sales_item&, const Sales_item&); 
public:
  typedef multiset<Sales_item, Comp> set_type; 
  typedef set_type::size_type size_type; 
  typedef set_type::const_iterator const_iter; 
  Basket() : items(compare) {}
  void add_item(const Sales_item &item) { items.insert(item); }
  size_type size(const Sales_item &i) const { return items.count(i); }
  double total() const; 

private:
  set_type items; 
}; 

double Basket::total() const 
{
  double sum = 0.0; 
  for(const_iter iter = items.begin(); 
                 iter != items.end(); 
                 iter = items.upper_bound(*iter))
    sum += (*iter)->net_price(items.count(*iter)); 

  return sum; 
}

int main(int argc, char **argv)
{
  Basket basket;  
  basket.add_item(Sales_item(Item_base("1", 2)));
  basket.add_item(Sales_item(Bulk_item("2", 1, 2, 3))); 
  cout << "total = " << basket.total() << endl;  
  return 0; 
}
