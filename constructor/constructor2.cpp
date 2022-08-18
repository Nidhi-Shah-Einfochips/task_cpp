#include<iostream>
using namespace std;
class A
{
    public:
    int *a;
    A()
    {
        a=new int;
    }
    int set_data(int a)
    {
        cout<<"value of the a"<<endl;
        return a;
    
    }
};
int main()
{
    A b,c;
   // b.set_data(5);
    c=b;
    cout<<c.set_data(3)<<endl;
   // b=b.a;
    //cout<<b<<endl;
    b=c;
   // cout<<b<<endl;
    //cout<<
}