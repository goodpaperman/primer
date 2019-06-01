#include <iostream> 
#include <string> 

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

int main()
{
  string word, last, most; 
  int max=0, cur=0; 
  while(cin >> word)
  {
    if(last == word)
    {
       ++ cur; 
       if(cur > max)
       {
          max = cur; 
	  most = word; 
       }       
    }
    else
	cur = 1; 

    last = word; 
  }

  cout << "most word is: \t" << most << " [" << max << "] " << endl;

  //int i=0; 
  //for(i<10; i++)
  //   ; 
 
  return 0; 
}
