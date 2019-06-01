#include "ListQueue.h" 

template <class Type>
ostream& operator<< (ostream &os, const ListQueue<Type> &q)
{
  os << " < "; 
  for(typename list<Type>::const_iterator it = q.vlist.begin(); 
      it != q.vlist.end(); ++it)
    os << *it << " "; 
  os << " > "; 
  return os; 
}

template <class Type>
istream& operator>> (istream &is, ListQueue<Type> &q)
{
  Type t; 
  is >> t; 
  q.push(t); 
  return is; 
}



