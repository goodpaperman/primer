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

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  int isrc2[10] = { 9, 29, 39, 2, 4, 93, 0, 10, 87, 72 }; 
  int idest[12] = { 0 }; 

  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  cout << "dest is: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  int *pos = partition(idest, idest+10, lesser(20)); 
  cout << "after partition from 20: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "bound pos = " << pos-idest 
         << " with " << *pos << endl; 

  copy(isrc2, isrc2+10, idest); 
  pos = stable_partition(idest, idest+10, lesser(20)); 
  cout << "after stable partition from 20: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 
  if(pos != idest+10)
    cout << "bound pos = " << pos-idest
         << " with " << *pos << endl; 

  sort(idest, idest+10); 
  cout << "after sort: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  stable_sort(idest, idest+10); 
  cout << " after stable sort: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl;  
  
  copy(isrc2, isrc2+10, idest); 
  sort(idest, idest+10, comparer()); 
  cout << "after sort(compare): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  stable_sort(idest, idest+10, comparer()); 
  cout << "after stable sort(compare): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  partial_sort(idest, idest+3, idest+10); 
  cout << "after partial sort: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  partial_sort(idest, idest+5, idest+10, comparer()); 
  cout << "after partial sort(compare): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  partial_sort_copy(isrc2, isrc2+5, idest, idest+12); 
  cout << "after partial sort copy: " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  partial_sort_copy(isrc2, isrc2+10, idest, idest+5); 
  cout << "after partial sort copy: " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  partial_sort_copy(isrc2, isrc2+10, idest, idest+5, comparer()); 
  cout << "after partial sort copy(compare): " << endl; 
  for_each(isrc2, isrc2+10, display); 
  cout << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  nth_element(idest, idest+5, idest+10); 
  cout << "after 5th element: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  nth_element(idest, idest+7, idest+10); 
  cout << "after 7th element: " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  copy(isrc2, isrc2+10, idest); 
  nth_element(idest, idest+3, idest+10, comparer()); 
  cout << "after 3th element(compare): " << endl; 
  for_each(idest, idest+10, display); 
  cout << endl; 

  sort(idest, idest+10); 
  for_each(idest, idest+10, display); 
  cout << endl; 
  return 0;
}
