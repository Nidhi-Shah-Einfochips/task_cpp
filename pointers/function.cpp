#include <iostream>
using namespace std;
int sum(int a, int b) {

    return a + b;
}
int main() {

    int(*funcPtr)(int,int);
    funcPtr = sum;
    int sum = funcPtr (4, 6);
    cout << "The Value of sum is: " << sum << endl;
    return 0;
}
