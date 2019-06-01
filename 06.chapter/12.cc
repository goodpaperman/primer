#include <iostream> 
#include <bitset> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::bitset;
using std::overflow_error; 

int main()
{
  bitset<128> bs; 
  cin >> bs; 
  unsigned long val = 0; 
  try
  {
    val = bs.to_ulong();
    cout << val << endl; 
  }catch(overflow_error e)
  {
    cout << "catch a overflow_error exception: " << endl
         << e.what() << endl; 
  } 

  return 0; 
}
