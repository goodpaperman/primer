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
  string rsp; 
  do 
  {
    string s1, s2; 
    cout << "Please enter two strings to compare: " << endl; 
    if(cin >> s2 >> s1) 
    {
      if(s1 < s2)
        cout << s1 << " < " << s2 << endl; 
      else 
        cout << s1 << " >= " << s2 << endl; 
    }

    cout << "More(y/n) ?" << endl; 
    cin >> rsp; 
  }while(rsp == "y"); 

  return 0; 
}
