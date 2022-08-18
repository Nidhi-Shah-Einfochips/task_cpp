#include<iostream>
#include<functional>
using namespace std;
class A
{
    string str = "nidhi";
    void printanything(std::function<void> workdonecb)
    {
        //std::cout<<str<<endl;
        workdonecb(str);
    }
};
class B
{
    private:
    std::function<void(std::string,std::function<void>)> m_doprint;
    B(A *ptr)
    {
        
    }
}