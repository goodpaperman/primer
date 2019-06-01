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
  Employee() : id_(newid++) 
          { cout << "Employee()" << endl; }
  Employee(string name) : name_(name), id_(newid++) 
          { cout << "Employee(string)" << endl; }
  Employee(const Employee &e) : name_(e.name_), id_(newid++) 
          { cout << "Employee(const Employee&)" << endl; }
  Employee& operator=(const Employee& e){
    name_ = e.name_; 
    id_ = newid++; 
    cout << "operator=" << endl; 
  }

  string get_name() { return name_; }
  int get_id() { return id_; }
private:
  string name_; 
  int id_; 
  static int newid; 
}; 

int Employee::newid = 1; 

Employee print(Employee e)
{
  return e; 
}

Employee& print2(Employee &e)
{
  return e; 
}

int main(int argc, char **argv)
{
  Employee e1, e2("haihai107");
  Employee e3(e2), e4 = e2, e5; 
  e5 = e3; 
  cout << endl; 
  e2 = print(e1);
  cout << endl; 
  e2 = print2(e1);  
  cout << endl; 
  Employee *pe = new Employee; 
  delete pe; 
  cout << endl; 
  pe = new Employee[3]; 
  vector<Employee> vec(pe, pe+3); 
  delete[] pe;  
  cout << endl; 
  vector<Employee> evec(3);   
  return 0; 
}
