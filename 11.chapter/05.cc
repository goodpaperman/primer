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

void print(vector<string>::iterator first, vector<string>::iterator last)
{
  while(first != last)
  {
    cout << *first << " "; 
    ++ first; 
  }
  cout << endl; 
}

bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size(); 
}

bool gt5(const string &s)
{
  if(s.size() >= 5)
    cout << s << endl; 
  return s.size() >= 5; 
}

int main(int argc, char **argv)
{
  istringstream input("the quick red fox jumps over the slow red turtle"); 
  string word; 
  vector<string> svec; 
  while(input >> word)
    svec.push_back(word); 

  print(svec.begin(), svec.end()); 
  sort(svec.begin(), svec.end()); 

  print(svec.begin(), svec.end()); 
  vector<string>::iterator it = unique(svec.begin(), svec.end()); 
  
  print(svec.begin(), svec.end()); 
  svec.erase(it, svec.end()); 
  
  print(svec.begin(), svec.end()); 
  stable_sort(svec.begin(), svec.end(), isShorter);

  print(svec.begin(), svec.end());  
  vector<string>::size_type wc = count_if(svec.begin(), svec.end(), gt5); 
  cout << wc << " word(s) 5 characters or longer." << endl; 
  return 0; 
}
