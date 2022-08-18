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
         auto func = std::bind(&A::f1,std::placeholders::_1,std::placeholders::_2);
         cout<<func(3);
    }
    void f1(int x,int y)
    {
	    return x+y;
    }
};
int main()
{
    A obj;
    obj.setcallback();
   
    
    return 0;
}
