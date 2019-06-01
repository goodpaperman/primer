
template <class T> allocator<T> CachedObj<T>::alloc_mem; 
template <class T> T* CachedObj<T>::freeStore = 0; 
template <class T> const size_t CachedObj<T>::chunk = 42; 

template <class T>
void CachedObj<T>::add_to_freelist(T *p)
{
  p->CachedObj<T>::next = freeStore; 
  freeStore = p; 
}

template <class T>
void* CachedObj<T>::operator new(size_t sz)
{
  if(sz != sizeof(T))
    throw runtime_error("CachedObj: wrong size object in operator new"); 

  if(!freeStore)
  {
    T *array = alloc_mem.allocate(chunk); 
    for(size_t i=0; i!=chunk; ++i)
      add_to_freelist(&array[i]); 
  }
  
  T *p = freeStore; 
  freeStore = freeStore->CachedObj<T>::next; 
  cout << "new " << sz << endl; 
  return p; 
}

template <class T>
void CachedObj<T>::operator delete(void *p, size_t sz)
{
  if(p)
    add_to_freelist(static_cast<T *>(p)); 

  cout << "delete " << sz << endl; 
}


