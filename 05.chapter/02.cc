#include <iostream> 
#include <bitset> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::bitset; 

int main()
{
  bitset<30> bs; 
  cout << "init = " << bs << endl; 
  bs[27] = 1; 
  cout << "27 passed = " << bs << endl; 
  cout << "27 passed ? " << (bs.test(27) ? "true" : "false") << endl; 
  bs[27] = 0; 
  cout << "27 failed = " << bs << endl; 

  //int i = 42; 
  //if(42 = i)
  //  cout << "error" << endl; 

  int ival = 1; 
  for(int i=0; i<20; i++)
  {
    cout << ival << " "; 
    ival += ival + 1; 
  }

  cout << endl; 
  return 0; 
}
