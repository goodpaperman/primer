#include <iostream> 
#include <iomanip> 
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
#include <cmath> 

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


int main()
{
  ostream::fmtflags fmt = cout.flags(); 
  cout << "default bool values: " 
       << true << " " << false 
       << "\nalpha bool values: " 
       << boolalpha
       << true << " " << false
       << endl; 

  const int ival = 15, jval = 1024; 
  cout << showbase << uppercase << setbase(4); 
  cout << "default: ival = " << ival
       << " jval = " << jval << endl; 
  cout << "in octal: ival = " << oct << ival
       << " jval = " << jval << endl; 
  cout << "in hexadecimal: ival = " << hex << ival
       << " jval = " << jval << endl; 

  cout << "Precision: " << cout.precision()
       << ", Value = " << sqrt(2.0) << ", " 
       << 0.00000123456 << ", " 
       << 12345600000.0 << endl; 
  cout.precision(12); 
  cout << "Precision: " << cout.precision()
       << ", Value = " << sqrt(2.0) << ", "
       << 0.00000123456 << ", " 
       << 12345600000.0 << endl; 
  cout << setprecision(3); 
  cout << "Precision: " << cout.precision()
       << ", Value = " << sqrt(2.0) << ", "
       << 0.00000123456 << ", " 
       << 12345600000.0 << endl; 

  cout << sqrt(2.0) << endl; 
  cout << "scientific: " << scientific << sqrt(2.0) << endl
       << "fixed decimal: " << fixed << sqrt(2.0) << endl; 
  cout << nouppercase << "scientific: " << scientific << sqrt(2.0) << endl
       << "fixed decimal: " << fixed << sqrt(2.0) << endl; 
  cout.unsetf(ostream::floatfield); 
  cout << sqrt(2.0) << endl; 

  cout << 10.0 
       << showpoint << endl
       << 10.0 << endl; 

  int i = -16; 
  double d = 3.14159; 
  cout << "i: " << setw(12) << i << "|" << endl 
       << "d: " << setw(12) << d << "|" << endl; 
  cout << left 
       << "i: " << setw(12) << i << "|" << endl 
       << "d: " << setw(12) << d << "|" << endl; 
  cout << right
       << "i: " << setw(12) << i << "|" << endl
       << "d: " << setw(12) << d << "|" << endl; 
  cout << internal
       << "i: " << setw(12) << i << "|" << endl
       << "d: " << setw(12) << d << "|" << endl; 
  cout << setfill('#') 
       << "i: " << setw(12) << i << "|" << endl
       << "d: " << setw(12) << d << "|" << endl
       << setfill(' '); 

  char ch = 0; 
  cin >> noskipws; // ws; 
  while(cin >> ch)
    cout << ch; 

  cout.flags(fmt); 
  //cout << noboolalpha << dec << noshowbase << nouppercase << noshowpoint; 
  cout << "then again: " 
       << true << " " << false
       << endl;
  cout << "then again: " 
       << "ival = " << ival 
       << " jval = " << jval << endl; 
  cout << sqrt(2.0) << endl
       << 0.00000123456 << ", " 
       << 12345600000.0 << endl; 

  return 0;
}

