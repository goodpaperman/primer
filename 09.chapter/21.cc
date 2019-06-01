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

string greet(string form, string lastname, string title, 
             string::size_type pos, int length)
{
  int first = form.find_first_of(' '); 
  int last = form.find_last_of(' '); 
  form.replace(first + 1, last - first - 1, title, pos, length);  
  cout << form << endl; 
  last = form.find_last_of(' ');
  form.replace(last+1, form.size()-last, lastname);   
  return form; 
}

int main()
{
  string generic1("Dear Ms Daisy:"); 
  string generic2("MrsMsMissPeople"); 
  string lastName("AnnaP"); 
  string salute = greet(generic1, lastName, generic2, 5, 4); 
  cout << salute << endl; 
  return 0; 
}
