#include "CheckedPtr.h" 

template <class Type>
CheckedPtr<Type>& CheckedPtr<Type>::operator++ ()
{
  if(curr == end)
    throw out_of_range("increment past the end of CheckedPtr"); 
  ++ curr; 
  return *this; 
}

template <class Type>
CheckedPtr<Type>& CheckedPtr<Type>::operator++ (int)
{
  CheckedPtr<Type> ret(*this); 
  ++ *this; 
  return ret; 
}

template <class Type>
CheckedPtr<Type>& CheckedPtr<Type>::operator-- ()
{
  if(curr == beg)
    throw out_of_range("decrement past the beginning of CheckedPtr"); 

  -- curr; 
  return *this; 
}

template <class Type>
CheckedPtr<Type>& CheckedPtr<Type>::operator-- (int)
{
  CheckedPtr<Type> ret(*this); 
  -- *this; 
  return ret; 
}

