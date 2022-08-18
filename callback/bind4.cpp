#include<iostream>
#include<functional>
using namespace std;
class A
{
    public:
    int x;

    auto setcallback()
    {
         cout<<"setcallback"<<endl;
         auto func = std::bind(&A::Print,this,std::placeholders::_1,std::placeholders::_2);
         func("nidhi",PrintDone());
         return func;

         //cout<<func(3);
    }

    void Print(string str, std::function<void>workdonecb)
    {

                //cout <<str<<endl;
                workdonecb();

                //return x+y;
    }
};

class B
{
    private:

    std::function<void(std::string , std::function<void>)> m_doPrint;

    B(A *ptr)
    {
	    auto functionptr=ptr->setcallback();
    }
    


    void DoPrint()
    {
        
        
        auto workdone = std::bind(&PrintDone,this);
        m_doPrint(str, workdone)

    }

    void PrintDone()
    {
        cout <<"workDone"<<endl;

    }


}

int main()
{
    A obj;
    B b(ptr);
    //b.GetDoPrintForMe( A*) 
    b.DoPrint();

    auto func = obj.setcallback();

    cout<<func(2,3)<<endl; 


    //obj1.setcallback(1000);
    //obj2.setcallback(2000);

    return 0;
}
