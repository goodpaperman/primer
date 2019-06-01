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

template <int h, int w>
class Screen; 

template <int h, int w>
ostream& operator<< (ostream& os, const Screen<h, w> &s); 

template <int h, int w>
istream& operator>> (istream& os, Screen<h, w> &s); 

template <int h, int w>
class Screen{
  friend ostream& operator<< <h, w> (ostream& os, const Screen<h, w> &s); 
  friend istream& operator>> <h, w> (istream& os, Screen<h, w> &s); 
public:
  Screen(): screen(h * w, '#'), cursor(0), 
            height(h), width(w) {}
private:
  string screen; 
  string::size_type cursor; 
  string::size_type height, width; 
}; 

template <int h, int w>
ostream& operator<< (ostream& os, const Screen<h, w> &s)
{
  os << "( " << s.height << ", " << s.width << ") "; 
  return os; 
}

template <int h, int w>
istream& operator>> (istream& is, Screen<h, w> &s)
{
  is >> s.height >> s.width; 
  return is; 
}


int main(int argc, char **argv)
{
  Screen<24, 80> hp; 
  cout << hp << endl;
  cin >> hp; 
  cout << hp << endl; 
  return 0;
}
