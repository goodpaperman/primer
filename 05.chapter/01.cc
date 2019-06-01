#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  cout << "21 % 6 = " << 21%6 << endl
       << "21 % 7 = " << 21%7 << endl
       << "-21 % -8 = " << -21%-8 << endl
       << "21 % -5 = " << 21%-5 << endl 
       << "21 / 6 = " << 21/6 << endl
       << "21 / 7 = " << 21/7 << endl
       << "-21 / -8 = " << -21/-8 << endl
       << "21 / -5 = " << 21/-5 << endl; 

  cout << "12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 = " 
       << 12/3*4+5*15+24%4/2 << endl; 

  cout << "-30 * 3 + 21 / 5 = " << -30*3+21/5 << endl
       << "-30 + 3 * 21 / 5 = " << -30+3*21/5 << endl
       << " 30 / 3 * 21 % 5 = " << 30/3*21%5 << endl
       << " -30 / 3 * 21 % 4 = " << -30/3*21%4 << endl; 

  unsigned long ul1 = 3, ul2 = 7; 
  cout << " ul1 & ul2 = " << (ul1&ul2) << endl 
       << " ul1 | ul2 = " << (ul1|ul2) << endl; 
  return 0; 
}
