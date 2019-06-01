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

int display(const int &v1)
{
  cout << v1 << " "; 
  return 0; 
}

class reversor {
public:
  bool operator() (const int &v1, const int &v2)
  { return v1 > v2; }
}; 


int main()
{
  int isrc[4] = { 1, 2, 3, 3 };  
  int idest[4] = { 1, 2, 3, 4 }; 
  int iset[8] = { 0 }; 
  
  cout << "source is: " << endl; 
  for_each(isrc, isrc+4, display); 
  cout << endl; 

  cout << "dest is: " << endl; 
  for_each(idest, idest+4, display); 
  cout << endl; 

  cout << "min 2 & 3 is: " << min(2, 3) << endl; 
  cout << "min 2 & 3 (reversor) is: " << min(2, 3, reversor()) << endl; 
  cout << "max 3 & 4 is: " << max(3, 4) << endl; 
  cout << "max 3 & 4 (reversor) is: " << max(3, 4, reversor()) << endl; 

  cout << "min element of src is: " << *min_element(isrc, isrc+4) << endl; 
  cout << "min element of src (reversor) is: "
       << *min_element(isrc, isrc+4, reversor()) << endl; 
  cout << "max element of dest is: " << *max_element(idest, idest+4) << endl; 
  cout << "max element of dest (reversor) is: " 
       << *max_element(idest, idest+4, reversor()) << endl; 

  if(lexicographical_compare(isrc, isrc+4, idest, idest+4))
    cout << "source < dest on lexicographical" << endl; 

  if(!lexicographical_compare(isrc, isrc+3, idest, idest+3))
    cout << "source(0-3) >= dest(0-3) on lexicographical" << endl; 

  if(!lexicographical_compare(isrc, isrc+4, idest, idest+4, reversor()))
    cout << "source >= dest on lexicographical (reversor)" << endl; 

  return 0;
}
