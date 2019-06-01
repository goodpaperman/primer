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
                 isbn(book), price(sales_price)
  {
    cout << "Item_base()" << endl; 
  }

  Item_base(const Item_base &base)
  {
    isbn = base.isbn; 
    price = base.price; 
    cout << "Item_base(const Item_base&)" << endl; 
  }

  const Item_base& operator=(const Item_base &base)
  {
    if(this != &base)
    {
      isbn = base.isbn; 
      price = base.price; 
      cout << "const Item_base& operator=(const Item_base&)" << endl; 
    }

    return *this; 
  }

  virtual ~Item_base()
  {
    cout << "~Item_base()" << endl; 
  }

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
                 quantity(qty), discount(disc_rate)
 {
    cout << "Disc_item()" << endl; 
 }

 Disc_item(const Disc_item &disc) : Item_base(disc) 
 {
   quantity = disc.quantity; 
   discount = disc.discount; 
   cout << "Disc_item(const Disc_item&)" << endl; 
 }

 const Disc_item& operator=(const Disc_item &disc)
 {
   Item_base::operator=(disc); 
   if(this != &disc)
   {
     quantity = disc.quantity; 
     discount = disc.discount; 
     cout << "const Disc_item& operator=(const Disc_item&)" << endl; 
   }

   return *this; 
 }

 ~Disc_item()
 {
   cout << "~Disc_item()" << endl; 
 }

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
            Disc_item(book, sales_price, qty, disc_rate)
 {
    cout << "Bulk_item()" << endl; 
 }

 Bulk_item(const Bulk_item &bulk) : Disc_item(bulk) 
 {
    cout << "Bulk_item(const Bulk_item&)" << endl; 
 }

 const Bulk_item& operator=(const Bulk_item& bulk)
 {
   Disc_item::operator=(bulk); 
   if(this != &bulk)
   {
     cout << "const Bulk_item& operator=(const Bulk_item&)" << endl; 
   }

   return *this; 
 }

 ~Bulk_item()
 {
    cout << "~Bulk_item()" << endl; 
 }

  double net_price(size_t) const; 
}; 

void f(Item_base &base)
{
}

void g(Item_base base)
{
}

int main(int argc, char **argv)
{
  cout << "test 1: " << endl; 
  Bulk_item item("0-201-82470-1", 50, 5, .19);
  cout << "test 2: " << endl; 
  Item_base base = item; 
  cout << "test 3: " << endl; 
  Disc_item disc(item); 
  cout << "test 4: " << endl; 
  base = disc; 
  cout << "test 5: " << endl; 
  disc = item;  
  cout << "test 6: " << endl; 
  f(base); 
  f(disc); 
  f(item);
  cout << "test 7: " << endl;
  g(base); 
  cout << "test 8: " << endl; 
  g(disc); 
  cout << "test 9: " << endl; 
  g(item); 
  cout << "test 10: " << endl; 
  Item_base *pBase = new Item_base; 
  delete pBase; 
  cout << "test 11: " << endl; 
  pBase = new Disc_item; 
  delete pBase; 
  cout << "test 12: " << endl; 
  pBase = new Bulk_item; 
  delete pBase; 
  cout << "test 13: " << endl; 
  vector<Item_base> base_vec(2); 
  cout << "test 14: " << endl; 
  vector<Disc_item> disc_vec(3); 
  cout << "test 16: " << endl; 
  vector<Bulk_item> bulk_vec(2); 
  cout << "test 17: " << endl;  
  return 0; 
}
