#include<iostream>
#include<functional>
using namespace std;
class A
{
public:
 auto setcallback()
 {
     auto func= std::bind(&A::Doprint,this,std::placeholders::_1,std::placeholders::_2);
     return func;
 }
 auto getcallback_a()
 {
    return setcallback();
  }
 void Doprint()
 {
 cout<<"calling through A \n";
 }
};

class B
{
 public:
 std::function<void(std::string,std::function<void(void)>)>b_doprint;

 void Doprint()
 {
    A *ptr;
    auto workdone =std::bind(&B::printdone,this);
    b_doprint("Work in b",workdone);
    ptr -> A::Doprint();

 }
 void printdone()
 {
 cout<<"WORK DONE IN B"<<endl;
 }
//friend void doprint(A*  , B*  );

};
class C
{
 public:
 std::function<void(std::string,std::function<void(void)>)>c_doprint;
 void Doprint()
 {
     B *ptr;
     auto workdone = std::bind(&C::printdone,this);
     c_doprint("work in c",workdone);
     void functionptr_c=ptr->B::Doprint();
     return functionptr_c;

 }
  void printdone()
   {
 cout<<"WORK DONE BY C"<<endl;
 }
//friend void doprint(A*  , B*  );

};