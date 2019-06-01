#ifndef __CACHED_OBJ_H__
#define __CACHED_OBJ_H__

template <class T>
class CachedObj{ 
public:
  void *operator new(size_t); 
  void operator delete(void *, size_t); 
  virtual ~CachedObj() {}

protected:
  T *next; 
private:
  static void add_to_freelist(T*); 
  static allocator<T> alloc_mem; 
  static T *freeStore; 
  static const size_t chunk; 
}; 

#include "CachedObj.cc" 
#endif 
