#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  char ch = 0; 
  int a=0, e=0, i=0, o=0, u=0; 
  while(cin >> ch)
  {
    switch(ch)
    {
      case 'a':
	++a; 
	break; 
      case 'e':
	++e; 
	break; 
      case 'i':
	++i; 
	break; 
      case 'o':
	++o; 
	break; 
      case 'u':
	++u; 
	break; 
    }
  }

  cout << "Number of vowel a: \t" << a << endl
       << "Number of vowel e: \t" << e << endl
       << "Number of vowel i: \t" << i << endl
       << "Number of vowel o: \t" << o << endl
       << "Number of vowel u: \t" << u << endl; 

  return 0; 
}
