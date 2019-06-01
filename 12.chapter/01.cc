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
#include <utility> 
#include <stdexcept> 

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

class Person{
public:
  Person() : name_(), address_() {}
  Person(string name, string address) : name_(name), address_(address) {}

  string name() const { return name_; }
  string address() const { return address_; }

private:
  string name_; 
  string address_; 
}; 

int main(int argc, char **argv)
{
  Person person, person2("haihai107", "beijing");  
  cout << person.name() << " " << person.address() << endl;  
  cout << person2.name() << " " << person2.address() << endl; 
  return 0; 
}
