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

class Employee{
public:
  Employee() : id_(newid++) {}
  Employee(string name) : name_(name), id_(newid++) {}
  Employee(const Employee &e) : name_(e.name_), id_(newid++) {}
  Employee& operator=(const Employee& e){
    name_ = e.name_; 
    id_ = newid++; 
  }

  string get_name() { return name_; }
  int get_id() { return id_; }
private:
  string name_; 
  int id_; 
  static int newid; 
}; 

int Employee::newid = 1; 

int main(int argc, char **argv)
{
  Employee e1, e2("haihai107");
  Employee e3(e2), e4 = e2, e5; 
  e5 = e3;  
  cout << e1.get_name() << " " << e1.get_id() << endl; 
  cout << e2.get_name() << " " << e2.get_id() << endl; 
  cout << e3.get_name() << " " << e3.get_id() << endl; 
  cout << e4.get_name() << " " << e4.get_id() << endl; 
  cout << e5.get_name() << " " << e5.get_id() << endl; 
  return 0; 
}
