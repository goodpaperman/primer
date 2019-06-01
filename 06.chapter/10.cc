#include <iostream> 
#include <string> 
#include <vector> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 
using std::vector; 

int main()
{
  string word, last; 
  while(cin >> word)
  {
    if(last == word)
    {
       cout << "repeat word found: " << word << endl; 
       last = ""; 
       break; 
    }

    last = word; 
  }

  if(last == word)
    cout << "no repeat word found." << endl; 

  return 0; 
}
