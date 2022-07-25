#include <iostream>
using namespace std;
int staticFun()
{
    static int count = 0;
    count++;
    return count;
}
int nonStaticFun()
{
       	int count = 0;
    count++;
    return count;
}
 
int main()
{
    cout << staticFun() <<endl;
    cout << staticFun() <<endl;
    cout<<"--------------"<<endl;
    cout << nonStaticFun() <<endl;
    cout << nonStaticFun() <<endl;
    return 0;
}

