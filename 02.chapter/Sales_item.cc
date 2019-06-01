#include <iostream> 
#include <math.h> 
#include "Sales_item.h" 

const int c_enum = sqrt(9);
extern const int c_out = 1234; 
Sales_item::Sales_item()
{
  std::cout << "c_val = " << c_val << std::endl;
  std::cout << "c_enum = " << c_enum << std::endl;  
  std::cout << "c_struct = " << c_struct << std::endl; 
  std::cout << "c_out = " << c_out << std::endl; 
  units_sold = 0; 
  revenue = 0;   
}
