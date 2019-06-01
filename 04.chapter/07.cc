#include <iostream> 
#include <vector> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::vector; 

int main()
{
  const size_t arr_size = 6; 
  int int_arr[arr_size] = { 0, 1, 2, 3, 4, 5 }; 
  vector<int> ivec(int_arr, int_arr+arr_size); 
  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); ++it)
    cout << *it << " "; 

  cout << endl;
  int i=0;  
  int *ia = new int[ivec.size()]; 
  for(vector<int>::iterator it = ivec.begin(); 
      it != ivec.end(); ++it)
    ia[i++] = *it; 

  for(int j=0; j<i; j++)
    cout << ia[j] << " "; 

  cout << endl; 
  delete[] ia; 
  return 0; 
}
