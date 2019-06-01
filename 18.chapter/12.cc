#include <iostream> 
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
#include <bitset> 

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
using std::bitset; 
using namespace std; 

typedef unsigned int Bit; 
class File {
public:
  Bit mode : 2; 
  Bit modified : 1; 
  Bit prot_owner : 3; 
  Bit prot_group : 3; 
  Bit prot_world : 3; 
}; 

void print_bits(File &file, int size); 
int main(int argc, char **argv)
{
  File file; 
  int size = sizeof(File); 
  cout << "sizeof File = " << size << endl; 

  file.mode = 0; 
  file.modified = 0; 
  file.prot_owner = 0; 
  file.prot_group = 0; 
  file.prot_world = 0; 
  print_bits(file, size); 

  file.mode = 1; 
  print_bits(file, size); 

  file.modified = 1; 
  print_bits(file, size); 

  file.prot_owner = 1; 
  print_bits(file, size); 

  file.prot_group = 1; 
  print_bits(file, size); 

  file.prot_world = 1; 
  print_bits(file, size); 
  
  return 0; 
}

void print_bits(File &file, int size)
{  
  char *mem = new char[size]; 
  memcpy(mem, &file, size); 
  for(int i=0; i<size; ++i)
  {
    bitset<8> bits(mem[i]); 
    cout << bits << endl; 
  }
  cout << endl; 
  delete []mem; 
}
