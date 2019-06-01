
template <class Type>
ostream& operator<< (ostream &os, const Queue<Type> &q)
{
  os << " < "; 
  QueueItem<Type> *p; 
  for(p = q.head; p; p = p->next)
    os << p->item << " "; 
  os << " > "; 
  return os; 
}

template <class Type>
istream& operator>> (istream &is, Queue<Type> &q)
{
  Type t; 
  is >> t; 
  q.push(t); 
  return is; 
}

template <class Type>
Queue<Type>& Queue<Type>::operator=(const Queue<Type> &Q)
{
  if(this != &Q)
  {
    destroy(); 
    copy_elems(Q); 
  }

  return *this; 
}

template <class Type>
void Queue<Type>::destroy()
{
  while(!empty())
    pop(); 
}

template <class Type>
void Queue<Type>::pop()
{
  QueueItem<Type> *p = head; 
  head = head->next; 
  delete p; 
}

template <class Type>
void Queue<Type>::push(const Type &val)
{
  QueueItem<Type> *p = new QueueItem<Type>(val); 
  if(empty())
    head = tail = p; 
  else 
  {
    tail->next = p; 
    tail = p; 
  }
}

template <class Type>
void Queue<Type>::copy_elems(const Queue<Type> &Q)
{
  QueueItem<Type> *p = Q.head; 
  while(p != 0)
  {
    push(p->item); 
    p = p->next; 
  }
}

template <class Type>
template <class It>
void Queue<Type>::copy_elems(It beg, It end)
{
  for(It it = beg; it != end; ++it)
    push(*it); 
}

template <class Type>
template <class It>
void Queue<Type>::assign(It beg, It end)
{
  destroy(); 
  copy_elems(beg, end); 
}

