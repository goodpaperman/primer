#include <istream> 
#include <ostream> 
#include <iostream>
using namespace std; 

class Sales_item{
public:
  double avg_price() const; 
  bool same_isbn(const Sales_item &rhs) const
    { return isbn == rhs.isbn; }
 
  Sales_item() : units_sold(0), revenue(0.0) {}

private:
  std::string isbn; 
  unsigned units_sold; 
  double revenue; 
}; 

ostream &operator<<(ostream &out, const Sales_item &item); 
istream &operator>>(istream &in, Sales_item &item); 
