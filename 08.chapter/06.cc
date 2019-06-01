
#include <iostream> 
#include <fstream> 
#include <stdexcept> 

using std::cin; 
using std::cout; 
using std::cerr; 
using std::endl;
using std::istream;  
using std::ifstream; 
using std::runtime_error; 

istream &print(istream &stream)
{
  char c;  
  stream.tie(0);    
  while(stream >> c, !stream.eof())
  {
    if(stream.bad())
      throw runtime_error("IO stream corrupted."); 
    if(stream.fail())
    {
      //cerr << "bad data, try again." << endl; 
      //cin.clear(istream::failbit); 
      //continue; 
      throw runtime_error("IO stream bad data."); 
    }

    cout << c; 
  }
  
  //istream::iostate old_state = cin.rdstate(); 
  cin.clear(); 
  //cin.setstate(old_state);   
  //cout << "old_state = " << old_state << endl; 
  stream.tie(&cout);
  return stream; 
}

int main()
{
  ifstream input("01.cc");
  print(input); 
  cout << "end of print" << endl; 
  return 0; 
}
