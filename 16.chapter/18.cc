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

template <typename T>
int compare(const T&, const T&)
{
  cout << "compare<T>(const T&, const T&) called" << endl; 
  return 0; 
}

template <class U, class V>
int compare(U, U, V)
{
  cout << "compare<U, V>(U, U, V) called" << endl; 
  return 0; 
}

int compare(const char*, const char*)
{
  cout << "comapre(const char*, const char*) called" << endl; 
  return 0; 
}


template <class T>
T calc(T t1, T t2)
{
  cout << "calc<T>(T, T) called" << endl; 
  return t1; 
} 

double calc(double d1, double d2)
{
  cout << "calc(double, double) called" << endl; 
  return d1; 
}

template <>
char calc<char> (char c1, char c2)
{
  cout << "calc<char>(char, char) called" << endl; 
  return c1; 
}

int main()
{
  cout << "compare(1, 0): " << endl; 
  compare(1, 0); 

  vector<int> ivec1(10), ivec2(20); 
  cout << "compare(ivec1.begin(), ivec1.end(), ivec2.begin(): " << endl; 
  compare(ivec1.begin(), ivec1.end(), ivec2.begin()); 

  int ia1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
  cout << "compare(ia1, ia1+10, ivec1.begin()): " << endl; 
  compare(ia1, ia1+10, ivec1.begin()); 

  const char const_arr1[] = "world", const_arr2[] = "hi"; 
  cout << "compare(const_arr1, const_arr2): " << endl; 
  compare(const_arr1, const_arr2); 

  char ch_arr1[] = "world", ch_arr2[] = "hi"; 
  cout << "compare(ch_arr1, ch_arr2): " << endl; 
  compare(ch_arr1, ch_arr2); 

  char *p1 = ch_arr1, *p2 = ch_arr2; 
  cout << "compare(p1, p2): " << endl; 
  compare(p1, p2); 

  const char *p3 = p1, *p4 = p2; 
  cout << "compare(p3, p4): " << endl; 
  compare(p3, p4); 

  cout << "compare(ch_arr1, const_arr1): " << endl; 
  compare(ch_arr1, const_arr1); 
  
  cout << "compare(ch_arr2, const_arr2): " << endl; 
  compare(ch_arr2, const_arr2); 
  
  cout << "compare(0, 0): " << endl; 
  compare(0, 0); 

  int ival(0); 
  double dval(0); 
  float fd(0); 
  cout << "calc(0, ival): " << endl; 
  calc(0, ival); 

  cout << "calc(0.25, dval): " << endl; 
  calc(0.25, dval); 

  cout << "calc(0, fd): " << endl; 
  calc(0, fd); 

  cout << "calc(0, 'J'): " << endl; 
  calc(0, 'J'); 
  return 0; 
}
