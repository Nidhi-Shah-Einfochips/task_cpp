#include<iostream>
using namespace std;
struct ABC
{
};
class XYZ
{
};
int main()
{
	//struct ABC a;
	cout<<"size of structure "<<sizeof(ABC)<<endl;
       	//cout<<"size of object "<<sizeof(a)<<endl;
	cout<<"size of class "<<sizeof(XYZ)<<endl;
    	return 0;
};
/*
 The C++ standard does not permit objects (or classes) of size 0. This is because that would make it possible for two distinct objects to have the same memory location. This is the reason behind the concept that even an empty class and structure must have a size of at least 1. It is known that the size of an empty class is not zero. Generally, it is 1 byte. The C++ Structures also follow the same principle as the C++ Classes follow, i.e. that structures in c++ will also not be of zero bytes. The minimum size must be one byte.
 */
