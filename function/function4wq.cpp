#include <iostream>
using namespace std;
 
int sum(int x, int y, int z = 0, int w = 0,int n=0)
{
    return (x + y + z + w + n);
}

int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30, 25) << endl;
    return 0;
}
