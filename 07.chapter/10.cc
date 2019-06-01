#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int sum(int *arr, size_t size)
{
  int total(0); 
  for(size_t i=0; i<size; ++i)
    total += arr[i]; 

  return total; 
}

int sum(const int *beg, const int *end)
{
  int total(0); 
  for(; beg != end; ++beg)
    total += *beg; 

  return total; 
}

int sum(int *arr)
{
  int total(0); 
  while(*arr != 0xa0a0)
    total += *arr++; 

  return total; 
}

int main()
{
  int arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa0a0}; 
  cout << "sum1 = " <<  sum(arr, 10) << endl; 
  cout << "sum2 = " << sum(arr, arr+10) << endl; 
  cout << "sum3 = " << sum(arr) << endl; 
  return 0; 
}
