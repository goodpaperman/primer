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
#include "find_mid.h" 

int main(int argc, char **argv)
{
  vector<int> ivec; 
  for(int i=0; i<10; ++i)
    ivec.push_back(i); 

  cout << find_mid<int>(ivec.begin(), ivec.end()) << endl;
  
  for(int i=0; i<10; ++i)
    ivec.push_back(100 - i); 

  cout << find_mid<int>(ivec.begin(), ivec.end()) << endl;  

  char str[2] = { 0 }; 
  vector<string> svec; 
  for(int i=0; i<26; ++i)
  {
    str[0] = 'a' + i; 
    svec.push_back(str); 
    //cout << svec[svec.size()-1] << endl; 
  }

  cout << find_mid<string>(svec.begin(), svec.end()) << endl; 
  return 0;
}
