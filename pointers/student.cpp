#include<iostream>
#include<string>
using namespace std;

class student_name
{
    public:
    string name;
    int a,b;
    student_name(string n )
    {
        name = n;

    }
    string set_name()
    {
       return name;
    }
};

int main()
{
    student_name obj1 ("ji");
    obj1.set_name();
    string student_name::*ptr1 = & student_name::set_name;
    obj1.*ptr1 = "hello";
    obj1.set_name();
}
