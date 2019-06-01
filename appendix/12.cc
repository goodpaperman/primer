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

class factor {
public:
  bool operator() (const int &v1, const int &v2)
  { cout << v1 << " @ " << v2 << endl; return false; /*v1 < v2;*/ }
}; 

class unioner {
public:
  bool operator()(const int &v1, const int &v2)
  { cout << v1 << " @ " << v2 << endl; return v1 < v2; } 
}; 

int main()
{
  int isrc[4] = { 1, 2, 2, 3 };  
  int idest[4] = { 2, 3, 4, 4 }; 
  int iset[8] = { 0 }; 
  
  cout << "source is: " << endl; 
  for_each(isrc, isrc+4, display); 
  cout << endl; 

  cout << "dest is: " << endl; 
  for_each(idest, idest+4, display); 
  cout << endl; 

  if(includes(isrc, isrc+4, idest, idest+4))
    cout << "source includes dest" << endl; 
  else 
    cout << "source not includes dest" << endl; 

  if(includes(isrc, isrc+4, idest, idest+4, factor()))
    cout << "source includes dest by factor" << endl; 
  else 
    cout << "source not includes dest by factor" << endl; 

  int *pos = set_union(isrc, isrc+4, idest, idest+4, iset); 
  cout << "after set union: " << endl; 
  for_each(iset, iset+8, display); 
  cout << endl; 
  if(pos != iset+8)
    cout << "end pos = " << pos-iset 
         << " with " << *pos << endl; 

  pos = set_union(isrc, isrc+4, idest, idest+4, iset, unioner()); 
  cout << "after set union(unioner): " << endl; 
  for_each(iset, iset+8, display); 
  cout << endl; 
  if(pos != iset+8)
    cout << "end pos = " << pos-iset
         << " with " << *pos << endl; 

  pos = set_intersection(isrc, isrc+4, idest, idest+4, iset); 
  cout << "after set intersection: " << endl; 
  for_each(iset, iset+8, display); 
  cout << endl; 
  if(pos != iset+8)
    cout << "end pos = " << pos-iset
         << " with " << *pos << endl; 

  pos = set_intersection(isrc, isrc+4, idest, idest+4, iset, unioner()); 
  cout << "after set intersection(unioner): " << endl; 
  for_each(iset, pos, display); 
  cout << endl; 

  pos = set_difference(isrc, isrc+4, idest, idest+4, iset); 
  cout << "after set difference: " << endl; 
  for_each(iset, pos, display); 
  cout << endl; 

  pos = set_difference(isrc, isrc+4, idest, idest+4, iset, unioner()); 
  cout << "after set difference(unioner): " << endl; 
  for_each(iset, pos, display); 
  cout << endl; 

  pos = set_symmetric_difference(isrc, isrc+4, idest, idest+4, iset); 
  cout << "after set symmetric difference: " << endl; 
  for_each(iset, pos, display); 
  cout << endl; 

  pos = set_symmetric_difference(isrc, isrc+4, idest, idest+4, iset, unioner());
  cout << "after set symmetric difference(unioner): " << endl; 
  for_each(iset, pos, display); 
  cout << endl; 


  return 0;
}
