#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

string init(); 
void print(const string &); 
void print(double); 
void print(int); 

int main()
{
  //void print(int); 
  int init = 0; 
  //string s = init(); 
  print("Value: "); 
  print(init); 
  print(3.14); 
  return 0; 
}
