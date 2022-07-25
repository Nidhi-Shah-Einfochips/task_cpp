#include <iostream>
using namespace std;
int main()
{
    int *ptr, var;
    var = 5;
    ptr = &var;
    cout << "Value pointed by ptr: " <<*ptr << endl;
    cout << "Address stored at ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr<<endl;
}
