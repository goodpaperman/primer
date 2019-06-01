
#include <iostream> 
#include <string> 
using std::string; 
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  string st("The expense of spirit"); 
  cout << "The size of \"" << st << "\" is " << st.size()
       << "\n characters, including the newline." << endl; 

  cout << "st is empty ? " << st.empty() << endl; 

  return 0; 
}
