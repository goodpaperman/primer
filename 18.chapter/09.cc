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

class Screen {
public:
  typedef string::size_type index; 
  typedef Screen& (Screen::*PMF)(); 
  Screen(PMF p = &Screen::home) : pmf(p) {}
  char get() const { return 'b'; }
  char get(index ht, index wd) const { return 'a'; } 

  enum Directions { HOME, FORWARD, BACK, UP, DOWN }; 
  Screen& home() { cout << "HOME" << endl; return *this; }
  Screen& forward() { cout << "FORWARD" << endl; return *this; }
  Screen& back() { cout << "BACK" << endl; return *this; }
  Screen& up() { cout << "UP" << endl; return *this; }
  Screen& down() { cout << "DOWN" << endl; return *this; }
  Screen& move(Directions); 
  void set_pmf(PMF p) { pmf = p; }
  Screen& call() { return (this->*pmf)(); }

//private:
  string contents; 
  index cursor; 
  index height, width; 
  static PMF Menu[]; 
  PMF pmf; 
}; 

Screen::PMF Screen::Menu[] = 
{
  &Screen::home, 
  &Screen::forward, 
  &Screen::back, 
  &Screen::up, 
  &Screen::down, 
}; 

Screen& Screen::move(Directions cm)
{
  return (this->*Menu[cm])(); 
}

int main(int argc, char **argv)
{
  //Screen::PMF pmf0 = &Screen::home; 
  Screen s, *ps = &s; 
  string Screen::*ps_screen = &Screen::contents; 
  cout << s.*ps_screen << endl; 

  Screen::index Screen::*pindex = &Screen::cursor; 
  cout << s.*pindex << endl; 
  cout << ps->*pindex << endl; 
  pindex = &Screen::height; 
  cout << s.*pindex << endl; 
  cout << ps->*pindex << endl; 
  pindex = &Screen::width; 
  cout << s.*pindex << endl; 
  cout << ps->*pindex << endl; 

  char (Screen::*pmf)() const = &Screen::get; 
  char (Screen::*pmf2)(Screen::index, Screen::index) const; 
  pmf2 = &Screen::get; 
  cout << (s.*pmf)() << endl;
  cout << (s.*pmf2)(1, 2) << endl;  
  cout << (ps->*pmf)() << endl; 
  cout << (ps->*pmf2)(2, 3) << endl; 
  
  typedef char (Screen::*Action)(Screen::index, Screen::index) const; 
  Action get = &Screen::get; 
  cout << (s.*get)(2, 3) << endl; 
  cout << (ps->*get)(3, 4) << endl; 

  s.move(Screen::HOME); 
  s.move(Screen::FORWARD); 
  s.move(Screen::BACK); 
  s.move(Screen::UP); 
  s.move(Screen::DOWN); 

  s.call(); 
  s.set_pmf(&Screen::down); 
  s.call(); 
  return 0;
}
