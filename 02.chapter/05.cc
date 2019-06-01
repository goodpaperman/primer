#include <iostream> 
#include "Sales_item.h" 

extern const int c_out; 
int main()
{
  std::cout << "c_val = " << c_val << std::endl; 
  std::cout << "c_enum = " << c_enum << std::endl; 
  std::cout << "c_struct = " << c_struct << std::endl; 
  std::cout << "c_out = " << c_out << std::endl; 
  Sales_item item; 
  std::cout << "item = " 
            << item.units_sold << ", " 
            << item.revenue << " ." 
            << std::endl; 
  return 0; 
}
