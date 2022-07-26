#include<iostream>
#include"string.h"
using namespace std;
class copy_string
{
	public:
		char s[20];
		char s2[20];
		int len;
		void getstring()
		{
			cout<<"enter the string you want copy"<<endl;
			cin>>s;
		}
		void cp()
		{
			copystring(s,s2);
		}
		void reverse()
		{
			reversestring(s);
		}
		void leng()
		{
			lengthstring(s,len);
		}
		void print()
		{
			cout<<"string 1 : "<<s<<endl;
			cout<<"string 2 : "<<s2<<endl;
		}
};
int main()
{
	copy_string c1;
	c1.getstring();
	c1.cp();
	c1.print();
	c1.leng();
	c1.reverse();
	cout<<endl;
	return 0;
}
