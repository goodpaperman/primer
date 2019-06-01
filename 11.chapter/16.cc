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


int main(int argc, char **argv)
{
  istream_iterator<int> in_iter(cin), eof; 
  ofstream out1("out1.txt"), out2("out2.txt"); 
  ostream_iterator<int> out_iter1(out1, "\n"), out_iter2(out2, "\n"); 
  while(in_iter != eof)
  {
    if(*in_iter % 2 == 0)
      *out_iter1++ = *in_iter; 
    else 
      *out_iter2++ = *in_iter; 

    ++ in_iter; 
  }

  return 0; 
}
