#include<iostream>
#include<functional>
using namespace std;
class A
{
    public:
    auto doprint()
    {

        auto workcb = std::bind(&A::printdone , this);
        return workcb;
    }
    void printdone()
    {
        cout<<"work done"<<endl;
    }

};
class B
{
    public:

    std::function<void(std::string,std::function<void(void)>)>A_callback;
    B(A *ptr1)
    { 
        
        A_callback=ptr1->doprint();
    }
    auto doprint()
    {
        auto funct = std::bind(&B::printdone , this);

        A_callback("heelo",funct);
        return A_callback;
    }
    void printdone()
    {

        cout<<"workdone"<<endl;
    }

};
class C
{
    public:
    std::function<void(std::string,std::function<void(void)>)>B_callback;
    C(B *ptr)
    {
        //  //B b;
        // void (*functptr_b)();//std::function<void(void)>);
        // functptr_b (ptr->doprint());

       B_callback = ptr->doprint();
    }
    auto doprint(string str)
    {
        auto workdonecb = std::bind(&C::printdone,this);
        B_callback(str,workdonecb);
        
    }
    void printdone()
    {
        cout<<"the work is done"<<endl;
    }
};
int main()
{
    A *ptr1;
    B *ptr;
    C c(ptr);
    B b(ptr1);
    c.doprint("hi");
    return 0;

}