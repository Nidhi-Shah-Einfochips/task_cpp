//call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y);

int main () {
   int a = 100;
   int b = 200;

   cout << "a :" << a << endl;
   cout << " b :" << b << endl;
   swap(a, b);

   cout << "a :" << a << endl;
   cout << "b :" << b << endl;

   return 0;
}
void swap(int &x, int &y) {
   int temp;
   temp = x;
   x = y;  
   y = temp; 

   return;
}
