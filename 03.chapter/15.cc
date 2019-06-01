
#include <iostream> 
#include <string> 
#include <vector> 
using std::string;
using std::vector;  
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
  int ival; 
  vector<int> ivec; 
  while(cin >> ival)
     ivec.push_back(ival); 
  
  cout << "vec size is: " << ivec.size() << endl; 
  for(vector<int>::size_type ix = 0; ix != ivec.size()-1 ; ++ix)
  {
    cout << "Sum of " << ivec[ix] << " and " << ivec[ix+1] 
         << " is "<< ivec[ix] + ivec[ix+1] << endl; 
  }

  if(ivec.size() % 2 != 0)
    cout << "Last element " << ivec[ivec.size()-1] << " has no pair." << endl;  
  cout << endl; 

  for(vector<int>::size_type ix = 0; ix != ivec.size() / 2; ++ix)
  {
    cout <<  "Sum of " << ivec[ix] << " and " << ivec[ivec.size()-ix-1] 
         << " is " << ivec[ix] + ivec[ivec.size()-ix-1] << endl; 
  }

  if(ivec.size() % 2 != 0)
     cout << "Center element " << ivec[ivec.size()/2] << " has no pair." << endl; 

  return 0; 
}
