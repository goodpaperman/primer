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
  if(argc != 2)
    throw runtime_error("invalid arguments."); 

  ifstream input; 
  input.open(argv[1]); 
  if(!input)
    throw runtime_error("read file error."); 

  string word; 
  vector<string> exclude;
  exclude.push_back("using"); 
  exclude.push_back("#include"); 
 
  map<string, int> word_count; 
  while(input >> word)
  {
    if(find(exclude.begin(), exclude.end(), word) == exclude.end())
      ++ word_count[word]; 
  }

  for(map<string, int>::iterator it = word_count.begin(); 
      it != word_count.end(); ++it)
    cout << it->first << ": " << it->second << endl; 

  return 0; 
}
