#include<iostream>
#include<functional>
using namespace std;
class A
{
    public:
    int x;
    void setcallback()
    {
         cout<<"setcallback"<<endl;
    }
    void f1(int x)
    {
        this->x=x;
        cout<<"X: "<<x<<endl;

    }
};
int main()
{
    A obj;
   auto func= std::bind(&A::f1,obj,placeholders::_1);
   func(2);
    
    return 0;
}
