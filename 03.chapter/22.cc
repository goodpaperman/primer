
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
  string str("1000000010000100101110"); 
  bitset<32> bitvec(str); 
  cout << bitvec << endl; 
  bitset<32> bitstr; 
  bitstr.set(1); 
  bitstr.set(2); 
  bitstr.set(3); 
  bitstr.set(5); 
  bitstr.flip(8); 
  bitstr.flip(13); 
  bitstr.flip(21); 
  cout << bitstr << endl; 
  return 0; 
}
