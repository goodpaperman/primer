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
using std::set; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

int main(int argc, char **argv)
{
  string word; 
  set<string> exclude; 
  exclude.insert("class"); 
  exclude.insert("success"); 

  cout << "enter a word to transform: " << endl; 
  while(cin >> word)
  {
    if(exclude.count(word) == 0)
    {
      if(word.size() > 0 && word.at(word.size()-1) == 's')
        word.resize(word.size()-1); 
    }

    cout << "after process: " << word << endl; 
  }

  return 0; 
}
