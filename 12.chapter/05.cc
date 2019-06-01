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

  Screen& move(index r, index c); 
  Screen& set(char); 
  //Screen& set(index, index, char); 
  Screen& display(ostream &os) 
          { do_display(os); return *this; }
  const Screen& display(ostream &os) const
          { do_display(os); return *this; } 
private:
  void do_display(ostream &os) const 
       { os << contents << endl; } 

  std::string contents; 
  index cursor; 
  index height, width; 
}; 

char Screen::get(index r, index c) const
{
  index row = r * width; 
  return contents[row+c]; 
}

Screen& Screen::set(char c) 
{
  contents[cursor] = c; 
  return *this; 
}

Screen& Screen::move(index r, index c)
{ 
  index row = r * width; 
  cursor = row + c; 
  return *this; 
}

int main(int argc, char **argv)
{
  string c(16 * 80, '#'); 
  Screen myscreen(16, 80, c); 
  myscreen.move(4, 0).set('$').display(cout);
  cout << endl;  
  myscreen.display(cout).move(0, 4).set('@'); 
  cout << endl; 
  const Screen myScreen(16, 80, c); 
  myScreen.display(cout); 
  return 0; 
}
