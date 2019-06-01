#include <iostream> 

using std::cin; 
using std::cout; 
using std::endl; 

void f(){ cout << "f() called" << endl; }
void f(int){ cout << "f(int) called" << endl; }
void f(int, int) { cout << "f(int, int) called" << endl; }
void f(double, double = 3.14) { cout << "f(double, double) called" << endl; }

void ff(int){ cout << "ff(int) called" << endl; } 
void ff(short){ cout << "ff(short called" << endl; }

void manip(long){}
void manip(float){}

enum Tokens { INLINE=128, VIRTUAL=129 }; 
void newf(unsigned char){ cout << "newf(uchar) called." << endl; }
void newf(int){ cout << "newf(int) called." << endl; }
//void newf(Tokens){ cout << "newf(Tokens) called." << endl; }

int main()
{
  cout << "f(5.6): "; 
  f(5.6);
  //cout << "f(42, 5.6): "; 
  //f(42, 5.6);
  //cout << "f(5.6, 42): "; 
  //f(5.6, 42);   
  
  cout << "ff('a'): "; 
  ff('a'); 

  //manip(3.14); 

  cout << "newf(VIRTUAL): "; 
  newf(VIRTUAL); 

  //cout << "newf(128): "; 
  //newf(128); 
  return 0; 
}
