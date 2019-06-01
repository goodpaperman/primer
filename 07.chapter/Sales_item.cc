#include "Sales_item.h" 

double Sales_item::avg_price() const
{
  if(units_sold)
    return revenue/units_sold; 
  else 
    return 0;  
}

istream &operator >>(istream &in, Sales_item &item)
{
  return in; 
}

ostream &operator <<(ostream &out, const Sales_item &item)
{
  return out; 
}
