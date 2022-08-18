#include<iostream>
#include<functional>
using namespace std;

class A
{
    public:
    auto setcallback()
    {
        auto func= std::bind(&A::Doprint,this,std::placeholders::_1,std::placeholders::_2);
        //func("nidhi",printdone);
        return func;
    }
    auto getcallback_a()
    {
        return setcallback();
    }
    void Doprint(string str, std::function<void(void)>workdonecb)
    {
        cout<<"calling \n"<<str<<endl;
        workdonecb();
    }
    


};
class B
{
    public:
    std::function<void(std::string,std::function<void(void)>)>b_doprint;
    B (A *ptr)
    {
        cout<<"In constructor B"<<endl;
        b_doprint=ptr->getcallback_a();
        Doprint();
    }
    auto getcallback_b(A *ptr)
    {
        return ptr->getcallback_a();
    }
    void Doprint()
    {
        auto workdone =std::bind(&B::printdone,this);
        b_doprint("Work in b",workdone);
    }
    void printdone()
    {
        cout<<"WORK DONE IN B"<<endl;
    }

};
class C
{
    public:
    std::function<void(std::string,std::function<void(void)>)>c_doprint;
    C (B *ptr)
    {
        A *ptr1;
        cout<<"In C constructor"<<endl;
        c_doprint = ptr->getcallback_b(ptr1);
    }
    void Doprint()
    {
        auto workdone = std::bind(&C::printdone,this);
        c_doprint("work in c",workdone);
        //return workdone;
    }
    void printdone()
    {
        cout<<"WORK DONE BY C"<<endl;
    }

};
int main()
{
    A *ptr1;
    B *ptr;
    C c(ptr);
    B b(ptr1);
    c.Doprint();

    return 0;

}