#include "find_mid.h" 

template <typename T>
T find_mid(
  typename vector<T>::iterator begin, 
  typename vector<T>::iterator end)
{
  vector<T> tmp(begin, end); 
  sort(tmp.begin(), tmp.end()); 
  return tmp[tmp.size()/2];   
}
