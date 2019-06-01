
#include <iostream> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl;
using std::istream;  
using std::runtime_error; 

int main()
{
  int ival; 
  while(cin >> ival, !cin.eof())
  {
    if(cin.bad())
      throw runtime_error("IO stream corrupted."); 
    if(cin.fail())
    {
      //cerr << "bad data, try again." << endl; 
      //cin.clear(istream::failbit); 
      //continue; 
      throw runtime_error("IO stream bad data."); 
    }

    cout << ival << endl; 
  }
  
  istream::iostate old_state = cin.rdstate(); 
  cin.clear(); 
  cin.setstate(old_state);   
  cout << "old_state = " << old_state << endl; 
}
