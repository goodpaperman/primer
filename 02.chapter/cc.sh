g++ -c 05.cc 
g++ -c Sales_item.cc
#puts the executeable in a.out
g++ 05.o Sales_item.o -o a.out
rm 05.o Sales_item.o
