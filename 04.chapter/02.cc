#include <iostream> 
#include <string> 
using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 

typedef string *pstring; 
typedef const string *pcstring; 

int main()
{
    const int i = 0, *p = i; 
    cout << "i = " << i << ", p = " << p << endl; 
    int ival = 1024, *pi = &ival, **ppi = &pi; 
    cout << "The value of ival\n" 
         << "direct value: " << ival << endl  
 	 << "indirect value: " << *pi << endl
	 << "doubly indirect value: " << **ppi << endl; 
    
    {
        const double pi = 3.14; 
        //double *ptr = &pi; 
        const double *cptr; 
        cptr = &pi; 
        double other = 1.2; 
	cptr = &other; 
        //void *pv = &pi; 
        const void *cpv = &pi; 
	double *const ptrc = &other; 
	double that = 3.2; 
 	//ptrc = &that; 
	*ptrc = 1.0; 
    }

    {
 	string s1("abcd"); 
	string s2("1234"); 
	pstring pstr = &s1; 
	const pstring cstr = &s2; 
	pstring const strc = &s1; 
	cout << *pstr << endl
             << *cstr << endl
	     << *strc << endl; 

	//pstr = &s2; 
	//cstr = &s1; 
	//strc = &s2; 
	*pstr = "nihaoma"; 
	*cstr = "wohenhao"; 
	*strc = "woxiangni"; 
	cout << *pstr << endl
	     << *cstr << endl
	     << *strc << endl; 
    }

    {
 	string s1("abcd"); 
	string s2("1234"); 
	pcstring pstr = &s1; 
	pcstring cstr = &s2; 
	pcstring strc = &s1; 
	//cout << *pstr << endl
        //     << *cstr << endl
	//     << *strc << endl; 

	pstr = &s2; 
	cstr = &s1; 
	strc = &s2; 
	cout << *pstr << endl
	     << *cstr << endl
	     << *strc << endl; 
	
	//*pstr = "nihaoma"; 
	//*cstr = "wohenhao"; 
	//*strc = "nine?"; 

    }

    return 0; 
}
