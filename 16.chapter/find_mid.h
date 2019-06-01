#ifndef __FIND_MID_H222__
#define __FIND_MID_H222__

#include <vector>
using namespace std; 

template <typename T>
T find_mid(
  typename vector<T>::iterator begin, 
  typename vector<T>::iterator end); 

#include "find_mid.cc"
#endif
