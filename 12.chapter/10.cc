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

class Account{
public:
  void applyinit() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double rate) { interestRate = rate; }
private:
  string owner; 
  double amount; 
  static double interestRate; 
  //static double initRate(); 
}; 

double Account::interestRate = 0; 

int main(int argc, char **argv)
{
  Account a; 
  cout << a.rate() << endl; 
  return 0; 
}
