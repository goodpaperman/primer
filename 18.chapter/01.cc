#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm>
#include <numeric>  
#include <functional> 
#include <utility> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::map; 
using std::multimap; 
using std::set; 
using std::multiset; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

template <class T>
class Vector
{
public:
  Vector() : elements(0), first_free(0), end(0) {}
  ~Vector(); 

  size_t size() const { return first_free - elements; }
  size_t capacity() const { return end - elements; }

  void push_back(const T&); 
  void reserve(size_t newsize); 
  void resize(size_t newsize, const T& t); 
  const T& operator[](int i) const { return elements[i]; } 
  T& operator[](int i) { return elements[i]; }

private:
  static allocator<T> alloc; 
  void reallocate(size_t min_size); 
  T *elements; 
  T *first_free; 
  T *end; 
}; 

template <class T>
allocator<T> Vector<T>::alloc; 

template <class T>
Vector<T>::~Vector<T>()
{
  for(T *p = first_free; p != elements; )
    alloc.destroy(--p); 

  if(elements)
    alloc.deallocate(elements, end - elements);

  elements = first_free = end = 0;  
}

template <class T>
void Vector<T>::push_back(const T& t)
{
  reallocate(size() + 1); 
  alloc.construct(first_free, t); 
  ++ first_free; 
}

template <class T>
void Vector<T>::reallocate(size_t min_size)
{
  if(capacity() >= min_size)
    return; 

  ptrdiff_t oldsize = size();
  ptrdiff_t newcapacity = max(capacity(), 1u); 
  while(newcapacity < min_size)
    newcapacity *= 2; 

  T *newelements = alloc.allocate(newcapacity); 
  uninitialized_copy(elements, first_free, newelements); 
  for(T *p = first_free; p != elements;)
    alloc.destroy(-- p); 

  if(elements)
    alloc.deallocate(elements, end - elements); 

  elements = newelements; 
  first_free = elements + oldsize; 
  end = elements + newcapacity; 
}

template <class T>
void Vector<T>::reserve(size_t newsize)
{
  if(newsize <= capacity())
    return; 

  reallocate(newsize); 
}

template <class T>
void Vector<T>::resize(size_t newsize, const T& t)
{
  if(newsize < size())
  {
    T *last = elements + newsize; 
    for(T *p = first_free; p != last; )
      alloc.destroy(--p); 

    first_free = last; 
  }
  else if(newsize > size())
  {
    reallocate(newsize);
    T *last = elements + newsize;
    for(T *p = first_free; p != last; ++p)
      alloc.construct(p, t);  

    first_free = last; 
  }
}

int main()
{
  Vector<int> ivec; 
  for(int i=0; i<10; ++i)
    ivec.push_back(i); 

  cout << "size = " << ivec.size() << endl; 
  cout << "capacity = " << ivec.capacity() << endl;  

  ivec.reserve(50); 
  cout << "size = " << ivec.size() << endl; 
  cout << "capacity = " << ivec.capacity() << endl; 

  ivec.resize(8, 0); 
  cout << "size = " << ivec.size() << endl; 
  cout << "capacity = " << ivec.capacity() << endl; 

  ivec.resize(22, 3); 
  cout << "size = " << ivec.size() << endl; 
  cout << "capacity = " << ivec.capacity() << endl; 

  for(int i=0; i<ivec.size(); ++i)
    cout << ivec[i] << endl; 
  return 0;}
