#include<iostream>
#include "extern_sub.cpp"  
using namespace std;

extern int num; 

int main()
{
    cout<<num<<endl;
    multiply(5);
    cout<<num<<endl;
    return 0;
}
