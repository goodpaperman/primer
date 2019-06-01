
#include <iostream> 
#include <string> 
#include <bitset> 
using std::string;
using std::bitset; 
using std::cin; 
using std::cout; 
using std::endl; 

template<unsigned int N> 
void print_bitset(bitset<N> &bitvec)
{
  for(int ix = bitvec.size()-1; ix != -1; --ix)
    cout << bitvec[ix]; 

  cout << endl; 
}

int main()
{
  bitset<16> bitvec1(0xffff); 
  bitset<32> bitvec2(0xffff); 
  bitset<128> bitvec3(0xffff); 
  print_bitset(bitvec1); 
  print_bitset(bitvec2); 
  print_bitset(bitvec3); 
 
  string s("1100"); 
  bitset<32> bitvec4(s); 
  print_bitset(bitvec4); 

  string s1("1111111000000011001101"); 
  bitset<32> bitvec5(s1, 5, 4); 
  bitset<32> bitvec6(s1, s1.size()-4); 
  bitset<32> bitvec7(s1); 
  print_bitset(bitvec5); 
  print_bitset(bitvec6); 
  print_bitset(bitvec7); 

  cout << bitvec7 << endl; 
  return 0; 
}
