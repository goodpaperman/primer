#include <iostream> 
#include <string> 
#include <vector> 
#include <cctype> 

using std::cin; 
using std::cout;
using std::cerr;  
using std::endl; 
using std::string; 
using std::vector; 

int main()
{
  bool find = false; 
  string word, last; 
  while(cin >> word && !word.empty())
  {
    if(!isupper(word[0]))
      continue; 

#ifndef NDEBUG
cerr << word << endl; 
#endif

    if(last == word)
    {
       find = true; 
       cout << "repeat word found: " << word << endl; 
       break; 
    }

    last = word; 
  }

  if(!find)
    cout << "no repeat word found." << endl; 

  return 0; 
}
