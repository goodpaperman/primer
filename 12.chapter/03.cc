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

class Screen{
public:
  typedef std::string::size_type index; 
  char get() const { return contents[cursor]; } 
  char get(index ht, index wd) const; 
  Screen(index h, index w, std::string c) : contents(c), height(h), width(w), cursor(0) { }

private:
  std::string contents; 
  index cursor; 
  index height, width; 
}; 

char Screen::get(index r, index c) const
{
  index row = r * width; 
  return contents[row+c]; 
}

int main(int argc, char **argv)
{
  Screen myscreen(16, 80, "hello world!"); 
  char ch = myscreen.get();
  cout << ch << endl;  
  ch = myscreen.get(0, 0); 
  cout << ch << endl; 
  return 0; 
}
