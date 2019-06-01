#include <iostream> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::vector; 

double sum(vector<double>::const_iterator beg, 
           vector<double>::const_iterator end)
{
  double total(0); 
  for(; beg != end; ++beg)
    total += *beg; 

  return total; 
}

int main()
{
  double arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa0a0};
  vector<double> dvec(arr, arr+10); 
  cout << "sum = " <<  sum(dvec.begin(), dvec.end()) << endl; 
  return 0; 
}
