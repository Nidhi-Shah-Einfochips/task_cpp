#include<iostream>
using namespace std;
class A
{
};
class B: public A
{
};
int main()
{
	cout<<sizeof(B)<<endl;
	return 0;
}
