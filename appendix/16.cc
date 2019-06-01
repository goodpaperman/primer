#include <iostream> 
#include <iomanip> 
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
#include <cmath> 

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


int main()
{
  //char ch = 0; 
  //while(cin.get(ch))
  //  cout.put(ch); 

  int ch = 0, i = 0; 
  ch = cin.peek(); 
  cout << "peek a charactor: " << (char)ch << endl; 
  while((ch = cin.get()) != EOF)
  {
    ++ i; 
    if(i == 20)
    {
      cout << endl << "get a charactor: " << (char) ch << endl; 
      cin.unget(); 
      continue; 
    }
    else if(i == 40)
    {
       cout << endl << "get a charactor: " << (char)ch << endl; 
       cin.putback('#'); 
       continue; 
    }


    cout.put(ch); 
  }


  return 0;
}

