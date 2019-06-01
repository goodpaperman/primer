
#include <iostream> 
#include <string> 
#include <bitset> 
using std::string;
using std::bitset; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  bitset<32> bitvec; 
  cin >> bitvec; 
  cout << bitvec << endl
       << "b.any() = " << bitvec.any() << endl
       << "b.none() = " << bitvec.none() << endl 
       << "b.count() = " << bitvec.count() << endl
       << "b.size() = " << bitvec.size() << endl; 
 
  bitvec.flip(); 
  cout << "after flip: " << bitvec << endl; 

  unsigned long ulong = bitvec.to_ulong(); 
  cout << "to_ulong = " << ulong << endl; 

  bitvec.reset(); 
  cout << "after reset: " << bitvec << endl; 
 
  bitvec.set(); 
  cout << "after set: " << bitvec << endl; 
 
  return 0; 
}
