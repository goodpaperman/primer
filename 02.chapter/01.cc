#include <iostream> 
int main()
{ 
  unsigned short v = 100000; 
  std::cout << "v = " << v << std::endl; 
  short v2 = 100000; 
  std::cout << "v2 = " << v2 << std::endl; 
  std::cout << "20 = " << 20 << ", " << 020 << ", " << 0x20 << std::endl; 

  unsigned char c=-1; 
  unsigned short s=-1; 
  unsigned int i=-1; 
  unsigned long l=-1; 
  std::cout << "unsigned char -1 = " << (unsigned short)c << std::endl; 
  std::cout << "unsigned short -1 = " << s << std::endl; 
  std::cout << "unsigned int -1 = " << i << std::endl;   
  std::cout << "unsigned long -1 = " << l << std::endl; 

  signed char ch = 129; 
  signed short sh = 65536; 
  std::cout << "char 129 = " << (short)ch << std::endl; 
  std::cout << "short 65536 = " << sh << std::endl; 

  std::cout << 3.14159F << ", "
            << 3.14159E0f << ", "
            << .001f << ", "
            << 1E-3F << ", "
            << 12.345L << ", "
            << 1.2345E1L << ", "
            << 0. << ", "
            << 0e0 << std::endl; 

  std::cout << "a multi-line "
               "string li"
               "teral usi"
               "ng concatenation"
            << std::endl; 

  std::cout << "multi-line " "string " "literal " "using "
               "concatenation" << std::endl; 

  std::cout << "a multi-line \
string literal \
using a backslash"
           << st\
d::\
endl; 

  std::cout << "Who goes with F\145rgus?\012" << std::endl; 
  //3.14UL; 
  //1024f; 
  3.14e1L; 
  -10u; 
 // "multiple line 
 //  comment"; 

  std::cout << "2\tM\n"; 

  int __i = 0; 
  float _Cabc = 0; 
  return 0; 
}
