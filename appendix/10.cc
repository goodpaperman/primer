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

int display(const int &v1)
{
  cout << v1 << " "; 
  return 0; 
}

class lesser {
public:
  lesser(int l) : level(l) {}
  bool operator()(const int &v) { return v < level; }
private:
  int level; 
}; 

class comparer {
public:
  bool operator() (const int &v1, const int &v2)
  { cout << v1 << " @ " << v2 << endl;  return v1 < v2; }
};

class remover {
public:
  remover(int n) : x(n) {}
  bool operator() (const int &v) const
  { return v == x; } 
private:
  int x; 
};

class uniquer {
public:
  bool operator() (const int &v1, const int &v2)
  { return v1 == v2; }
};  

class randomer {
public:
  int operator() (int n)
  { return 0; }
}; 

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  int isrc2[10] = { 9, 29, 39, 2, 4, 93, 0, 10, 87, 72 }; 
  int idest[12] = { 0 }; 

  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  copy(isrc, isrc+10, idest); 
  int *pos = remove(idest, idest+10, 4); 
  cout << "after remove 4: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest 
         << " with " << *pos << endl; 

  pos = remove_copy(isrc, isrc+10, idest, 4); 
  cout << "after remove copy 4: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  pos = remove_if(idest, pos, remover(12)); 
  cout << "after remove 12: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 
  
  pos = remove_copy_if(isrc, isrc+10, idest, remover(12)); 
  cout << "after remove copy 12: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  copy(isrc, isrc+10, idest); 
  pos = unique(idest, idest+10); 
  cout << "after unique: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  pos = unique_copy(isrc, isrc+10, idest); 
  cout << "after unique copy: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  copy(isrc, isrc+10, idest); 
  pos = unique(idest, idest+10, uniquer()); 
  cout << "after unique(uniquer): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  pos = unique_copy(isrc, isrc+10, idest, uniquer()); 
  cout << "after unique copy(uniquer): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "end pos = " << pos-idest
         << " with " << *pos << endl; 

  copy(isrc, isrc+10, idest); 
  rotate(idest, idest+5, idest+10); 
  cout << "after rotate: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  rotate_copy(isrc, isrc+5, isrc+10, idest); 
  cout << "after rotate copy: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  reverse(idest, idest+10); 
  cout << "after reverse: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  reverse_copy(idest, idest+10, isrc2); 
  cout << "after reverse copy: " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 

  copy(isrc, isrc+10, idest); 
  random_shuffle(idest, idest+10); 
  cout << "after random shuffle 1: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  randomer r; 
  copy(isrc, isrc+10, idest); 
  random_shuffle(idest, idest+10, r); 
  cout << "after random shuffle 2: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  
  return 0;
}
