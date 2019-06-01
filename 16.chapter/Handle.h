#ifndef __HANDLE_H__
#define __HANDLE_H__

template <class T>
class Handle{
public:
  Handle(T *p = 0) : ptr(p), use(new size_t(1)) { }
  Handle(const Handle &h) : ptr(h.ptr), use(h.use) { ++ *use; }
  Handle& operator= (const Handle& h){
    ++ *h.use; 
    rem_ref(); 
    ptr = h.ptr; 
    use = h.use; 
  }
  ~Handle() { rem_ref(); }
  T& operator* (){
    if(ptr) return *ptr; 
    throw runtime_error("dereference of unbound Handle"); 
  }

  T* operator-> (){
    if(ptr) return ptr; 
    throw runtime_error("access through unbound Handle"); 
  }

  const T& operator* () const{
    if(ptr) return *ptr; 
    throw runtime_error("dereference of unbound Handle"); 
  }

  const T* operator-> () const{
    if(ptr) return ptr; 
    throw runtime_error("access through unbound Handle"); 
  }

private:
  T* ptr; 
  size_t *use; 
  void rem_ref() { if(-- *use == 0) { delete ptr; delete use; } }
}; 

#endif
