#ifndef __LIST_QUEUE_H__
#define __LIST_QUEUE_H__

template <class Type> class ListQueue; 
template <class Type> 
ostream& operator<< (ostream& os, const ListQueue<Type> &q); 
template <class Type>
istream& operator>> (istream& is, ListQueue<Type> &q); 

template <class Type>
class ListQueue{
  friend ostream& operator<< <Type> (ostream& os, const ListQueue<Type> &q); 
  friend istream& operator>> <Type> (istream& is, ListQueue<Type> &q); 
public:
  ListQueue() {}
  ListQueue(const ListQueue &Q) : vlist(Q.vlist) { }
  template <class It>
  ListQueue(It beg, It end) : vlist(beg, end) {}
  ListQueue& operator=(const ListQueue& q) 
    { if(this != &q) vlist = q.vlist; return *this; }
  ~ListQueue() { }

  Type& front() { return vlist.front(); }
  const Type& front() const { return vlist.front(); }
  void push(const Type& v) { vlist.push_back(v); }
  void pop() { vlist.pop_front(); } 
  bool empty() const { return vlist.empty(); }
  template <class It>
  void assign(It beg, It end) { vlist.assign(beg, end); }
private:
  list<Type> vlist; 
}; 

#include "ListQueue.cc"
#endif
