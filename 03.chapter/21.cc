
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
  bitset<64> bitvec(32); 
  bitset<32> bv(1010101); 
  string bstr; 
  cin >> bstr; 
  bitset<8> b(bstr); 
  cout << bitvec << endl; 
  cout << bv << endl; 
  cout << bstr << ": " <<  b << endl; 
  return 0; 
}
