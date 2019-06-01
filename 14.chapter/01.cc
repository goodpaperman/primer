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
       { return isbn_ == rhs.isbn_; }
  explicit Sales_item(string isbn = "") : isbn_(isbn), units_sold_(0), revenue_(0.0) { }

  friend Sales_item operator+(const Sales_item &a, const Sales_item &b)
  {
    Sales_item c(a.isbn_); 
    c.units_sold_ = a.units_sold_ + b.units_sold_; 
    c.revenue_ = a.revenue_ + b.revenue_; 
    return c; 
  }

  Sales_item& operator+=(const Sales_item &a)
  {
    units_sold_ += a.units_sold_; 
    revenue_ += a.revenue_; 
    return *this; 
  }
  friend istream& operator >> (istream &in, Sales_item &a)
  {
    in >> a.isbn_;
    in >> a.units_sold_; 
    in >> a.revenue_; 
    return in; 
  }

  friend ostream& operator << (ostream &out, const Sales_item &a)
  {
    out << a.isbn_ << " " << a.units_sold_ << " " << a.revenue_ << endl; 
    return out; 
  }
private:
  std::string isbn_; 
  unsigned units_sold_; 
  double revenue_; 
}; 

inline double Sales_item::avg_price() const 
{
  if(units_sold_)
    return revenue_ / units_sold_; 
  else 
    return 0; 
}

int main(int argc, char **argv)
{
  Sales_item item, item2; 
  cin >> item >> item2; 
  cout << item << item2; 
  item = item + item2; 
  cout << item; 
  item += item2; 
  cout << item; 
  return 0; 
}
