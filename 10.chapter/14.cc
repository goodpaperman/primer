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
using std::multimap; 
using std::set; 
using std::multiset; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

int main(int argc, char **argv)
{
  multimap<string, string> bookmap; 
  bookmap.insert(make_pair("lippman", "cpp primer 4")); 
  bookmap.insert(make_pair("lippman", "cpp primer 3")); 
  bookmap.insert(make_pair("lippman", "cpp primer 2")); 
  bookmap.insert(make_pair("lippman", "cpp primer")); 
  bookmap.insert(make_pair("lippman", "deep into cpp module")); 
  bookmap.insert(make_pair("K&R", "C")); 
  bookmap.insert(make_pair("benjamine", "cpp programing language")); 
  
  string author; 
  cout << "enter an author name to find books: " << endl; 
  while(cin >> author)
  {
    multimap<string, string>::iterator first = bookmap.lower_bound(author); 
    multimap<string, string>::iterator last = bookmap.upper_bound(author); 
    if(first != last)
    {
      cout << "find books with author " << author << endl; 
      for(multimap<string, string>::iterator it = first; it != last; ++it)
        cout << it->second << endl; 

      bookmap.erase(first, last); 
    }
    else 
      cout << "not find." << endl; 

    cout << "books in the library: " << endl; 
    for(multimap<string, string>::iterator it = bookmap.begin(); 
        it != bookmap.end(); ++ it)
      cout << it->first << ": " << it->second << endl; 
  }
 
  return 0; 
}
