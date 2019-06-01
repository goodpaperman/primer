#ifndef SALESITEM_H
#define SALESITEM_H

#include <string> 
#include <math.h> 

const int c_val = 1024;
extern const int c_enum;
const double c_struct = sin(0.3030); 

enum 
{
  first = c_val, 
  //second = c_enum, 
  //third = (int)c_struct, 
}; 

class Sales_item
{
public:
  Sales_item();   
//private:
  std::string isbn; 
  unsigned units_sold; 
  double revenue; 
}; 

#endif 
