#ifndef __QUEUE_H__
#define __QUEUE_H__

template <class Type> class Queue; 
template <> class Queue<const char*>; 
template <class Type> 
ostream& operator<< (ostream& os, const Queue<Type> &q); 
template <>
ostream& operator<< <const char*> (ostream& os, const Queue<const char*> &q); 
template <class Type>
istream& operator>> (istream& is, Queue<Type> &q); 
template <>
istream& operator>> (istream& is, Queue<const char*> &q); 


template <class Type>
class QueueItem{
  //template <class T> friend class Queue; 
  friend class Queue<Type>; 
  friend ostream& operator<< <Type>(ostream& os, const Queue<Type> &q); 
  friend istream& operator>> <Type>(istream& is, Queue<Type> &q); 
  QueueItem(const Type &t) : item(t), next(0) {}
  Type item; 
  QueueItem *next; 
}; 

template <class Type>
class Queue{
  friend ostream& operator<< <Type> (ostream& os, const Queue<Type> &q); 
  friend istream& operator>> <Type> (istream& is, Queue<Type> &q); 
public:
  Queue() : head(0), tail(0) {}
  Queue(const Queue &Q) : head(0), tail(0) 
    { copy_elems(Q); }
  template <class It>
  Queue(It beg, It end) : head(0), tail(0)
    { copy_elems(beg, end); }
  Queue& operator=(const Queue&); 
  ~Queue() { destroy(); }

  Type& front() { return head->item; }
  const Type& front() const { return head->item; }
  void push(const Type&); 
  void pop(); 
  bool empty() const { return head == 0; }
  template <class It>
  void assign(It beg, It end); 
private:
  QueueItem<Type> *head, *tail; 
  void destroy(); 
  void copy_elems(const Queue&); 
  template <class It>
  void copy_elems(It beg, It end); 
}; 

template <>
class Queue<const char*> { 
  friend ostream& operator<< <const char*> (ostream& os, const Queue<const char*> &q); 
  friend istream& operator>> <const char*> (istream& is, Queue<const char*> &q); 
public:
  void push(const char*); 
  void pop() { real_queue.pop(); }
  bool empty() const { return real_queue.empty(); }
  string front() { return real_queue.front(); }
  const string front() const { return real_queue.front(); }

private:
  Queue<string> real_queue; 
}; 

//#include "QueueEx.cc"
//void Queue<const char*> push(const char* str)
//{
//  return real_queue.push(str); 
//}

#include "QueueEx.cc"
#endif
