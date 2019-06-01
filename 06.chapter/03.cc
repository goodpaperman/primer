#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  char ch = 0; 
  int a=0, e=0, i=0, o=0, u=0; 
  int A=0, E=0, I=0, O=0, U=0; 
  int space = 0; 
  while(cin >> ch)
  {
    switch(ch)
    {
      case 'a':
	++a; 
	break; 
      case 'A':
        ++A; 
        break; 
      case 'e':
	++e; 
	break; 
       case 'E':
	++E; 
	break; 
      case 'i':
	++i; 
	break; 
      case 'I':
	++I; 
	break; 
      case 'o':
	++o; 
	break; 
      case 'O':
	++O; 
	break; 
      case 'u':
	++u; 
	break; 
      case 'U':
	++U; 
	break; 
      case ' ':
      case '\t':
      case '\n':
        ++space; 
	break; 
    }
  }

  cout << "Number of vowel a: \t" << a << endl
       << "Number of vowel e: \t" << e << endl
       << "Number of vowel i: \t" << i << endl
       << "Number of vowel o: \t" << o << endl
       << "Number of vowel u: \t" << u << endl; 

  cout << "Number of vowel A: \t" << A << endl
       << "Number of vowel E: \t" << E << endl
       << "Number of vowel I: \t" << I << endl
       << "Number of vowel O: \t" << O << endl 
       << "Number of vowel U: \t" << U << endl; 

  cout << "Number of space: \t" << space << endl; 
  return 0; 
}
