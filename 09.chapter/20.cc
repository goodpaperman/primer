#include <iostream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <algorithm> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque; 

int main()
{
  string sentence = "We were her pride of 10 she named us: "
                    "Benjamin, Phoenix, the Prodigal "
                    "and perspicacious pacific Suzanne"; 
  
  istringstream stream(sentence); 
  string word; 
  int min(0xfffffff), max(0), count(0); 
  vector<string> minvec, maxvec; 
  while(stream >> word)
  {
    ++ count; 
    cout << "processing " << word << endl; 
    if(word.size() >= max)
    {
      if(word.size() >  max)
        maxvec.clear(); 

      maxvec.push_back(word); 
      max = word.size(); 
    }
    else if(word.size() <= min)
    {
      if(word.size() < min)
        minvec.clear(); 

      minvec.push_back(word); 
      min = word.size(); 
    }
  }
  
  cout << "total word count = " << count << endl; 
  cout << "max word length = " << max << ", they are: " << endl; 
  for(vector<string>::iterator it = maxvec.begin(); 
      it != maxvec.end(); ++it)
    cout << *it << " "; 

  cout << endl; 
  cout << "min word length = " << min << ", they are: " << endl; 
  for(vector<string>::iterator it = minvec.begin(); 
      it != minvec.end(); ++it)
    cout << *it << " "; 

  cout << endl; 
  return 0; 
}
