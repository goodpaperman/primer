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
  int ff=0, fl=0, fi=0; 
  bool f=false; 

  while(cin >> ch)
  {
    switch(ch)
    {
      case 'a':
	++a; 
        f = false; 
	break; 
      case 'A':
        ++A; 
	f = false; 
        break; 
      case 'e':
	++e; 
	f = false; 
	break; 
       case 'E':
	++E; 
	f = false; 
	break; 
      case 'i':
	if(f)
	  ++fi; 

	++i; 
	f = false; 
	break; 
      case 'I':
	++I; 
	f = false; 
	break; 
      case 'o':
	++o; 
	f = false; 
	break; 
      case 'O':
	++O; 
	f = false; 
	break; 
      case 'u':
	++u; 
	f = false; 
	break; 
      case 'U':
	++U; 
	f = false; 
	break; 
      case ' ':
      case '\t':
      case '\n':
        ++space; 
	f = false; 
	break; 
      case 'f':
	if(f)
	{
	  ++ff; 
	  f = false; 
	}
	else 	
	  f=true; 
	break; 
      case 'l':
	if(f)
	  ++fl; 
	
	f = false; 
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

  cout << "Number of space: \t" << space << endl
       << "Number of ff: \t" << ff << endl
       << "Number of fl: \t" << fl << endl
       << "Number of fi: \t" << fi << endl; 

  return 0; 
} 
