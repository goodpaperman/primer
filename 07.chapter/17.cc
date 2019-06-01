#include <iostream> 
#include <string>

using std::cin; 
using std::cout; 
using std::endl; 
using std::string; 

string make_plural(size_t ctr, const string &word, 
                   const string &ending = "s")
{
  return (ctr == 1) ? word : word + ending;  
}

int main(int argc, char *argv[])
{
  cout << "plural of success is: " << make_plural(2, "success", "es") << endl; 
  cout << "plural of failure is: " << make_plural(2, "failure") << endl; 
  return 0; 
}
