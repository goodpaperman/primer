#ifndef __QUEUE_H__
#define __QUEUE_H__

template <class Type> class Queue; 
template <class Type> 
ostream& operator<< (ostream& os, const Queue<Type> &q); 
template <class Type>
istream& operator>> (istream& is, Queue<Type> &q); 


template <class Type>
class Queue {
  //struct QueueItem{
  //  QueueItem(const Type &t) : item(t), next(0) {}
  //  Type item; 
  //  QueueItem *next; 
  //}; 
  struct QueueItem; 
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
  QueueItem *head, *tail; 
  void destroy(); 
  void copy_elems(const Queue&); 
  template <class It>
  void copy_elems(It beg, It end); 
}; 

#include "Queue2.cc"
#endif
