#include <iostream>
using namespace std;
int mul(int a, int b) {

    return a * b;
}
int main() {

    int(*funcPtr)(int,int);
    funcPtr = mul;
    int mul = funcPtr (4, 6);
    cout << "The Value of mul is: " << mul << endl;
    return 0;
}
