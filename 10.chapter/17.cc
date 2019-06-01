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
#include "text_query.h" 

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
  ifstream infile; 
  if(argc < 2)
    throw runtime_error("invalid arguments."); 

  infile.open(argv[1]); 
  if(!infile)
    throw runtime_error("invalid file name."); 

  TextQuery tq; 
  tq.read_file(infile); 
  while(true)
  {
    cout << "enter word to look for, or q to quit: " << endl; 
    string s; 
    cin >> s; 
    if(!cin || s == "q")
      break; 

    set<TextQuery::line_no> locs = tq.run_query(s); 
    set<TextQuery::line_no>::size_type size = locs.size(); 
    cout << endl << s << " occurs " << size 
         << (size > 0 ? " times" : " time") << endl; 
    set<TextQuery::line_no>::iterator it; 
    for(it = locs.begin(); it!=locs.end(); ++it)
    {
      cout << "\t(line " << (*it+1) << ") " << tq.text_line(*it) << endl; 
    }
  }

  return 0; 
}
