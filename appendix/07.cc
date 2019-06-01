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

class tracer {
public:
  bool operator ()(const int &v1, const int &v2)
  {
    cout << v1 << " @ " << v2 << endl; 
    return v1 < v2; 
  }
}; 

int fn_gen()
{
  return rand() % 99; 
}

class gen {
public:
  int operator()() { return rand() % 99; }
}; 


class timer {
public:
  timer(int t) : times(t) {}
  int operator() (const int &v) { return v * times; }
private:
  int times; 
}; 

class adder { 
public:
  adder(int a) : add(a) {}
  int operator() (const int &v1, const int &v2) { return v1 + v2 + add; }
private:
  int add; 
}; 

class odd {
public:
  bool operator() (const int &v1) { return v1 % 2 == 1; }
}; 

class merger {
public:
  bool operator() (const int &v1, const int &v2)
  { return v1 < v2; }
}; 

int main()
{
  int isrc[10] = { 1, 2, 4, 4, 6, 7, 9, 11, 12, 12 };  
  int isrc2[10] = { 0 }; 
  int idest[12] = { 0 }; 

  cout << "source is: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  fill_n(isrc, 8, 3); 
  cout << "after fill: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  generate_n(isrc, 10, fn_gen); 
  cout << "after gen function: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  generate_n(isrc, 10, gen()); 
  cout << "after gen functor: " << endl; 
  for_each(isrc, isrc+10, display); 
  cout << endl; 

  copy(isrc, isrc+10, idest); 
  cout << "after copy: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  transform(isrc, isrc+10, idest, timer(2)); 
  cout << "after transform1: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  copy(isrc, isrc+10, isrc2); 
  transform(isrc, isrc+10, isrc2, idest, adder(10)); 
  cout << "after transform2: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  replace_copy(isrc, isrc+10, idest, 4, 0); 
  cout << "after replace copy1: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  replace_copy_if(isrc, isrc+10, idest, odd(), 1); 
  cout << "after replace copy2: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  generate_n(isrc, 6, fn_gen); 
  generate_n(isrc2, 6, fn_gen); 

  sort(isrc, isrc+6); 
  cout << "input1: " << endl; 
  for_each(isrc, isrc+6, display); 
  cout << endl; 

  sort(isrc2, isrc2+6); 
  cout << "input2: " << endl; 
  for_each(isrc2, isrc2+6, display); 
  cout << endl; 

  merge(isrc, isrc+6, isrc2, isrc2+6, idest); 
  cout << "after merge1: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 

  merge(isrc, isrc+6, isrc2, isrc2+6, idest, merger()); 
  cout << "after merge2: " << endl; 
  for_each(idest, idest+12, display); 
  cout << endl; 
  
  return 0;
}
