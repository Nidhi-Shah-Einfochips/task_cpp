#include <iostream>
using namespace std;
struct rect
{ 
	rect()
	{
		cout<<"inside default constructor "<<endl;
	}
};
int main()
{
	rect r1;
}
