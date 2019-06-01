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
  vector<string> books; 
  books.push_back("cpp primer"); 
  books.push_back("K & R C"); 
  books.push_back("linux c"); 
  books.push_back("deep into cpp module"); 

  set<string> read; 
  read.insert(books[0]); 
  for(vector<string>::iterator it = books.begin(); 
      it != books.end(); ++it)
      cout << (read.count(*it) ? "read: " : "not read: ") << *it << endl; 
  
  return 0; 
}
