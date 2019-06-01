#ifndef __CHECKED_PTR_H__
#define __CHECKED_PTR_H__

template <class Type>
class CheckedPtr{
public:
  CheckedPtr(Type *b, Type *e) : beg(b), end(e), curr(b) {}
  CheckedPtr& operator++(); 
  CheckedPtr& operator++(int); 
  CheckedPtr& operator--(); 
  CheckedPtr& operator--(int); 

private:
  Type *beg; 
  Type *end; 
  Type *curr; 
}; 

#include "CheckedPtr.cc" 
#endif
