#include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[10];
};
int main()
{
	int i;
	int count;
	cout<<"enter the no. of records you want to enter"<<endl;
	cin>>count;
	struct student st[count];
	cout<<" enter the records "<<endl;
	for(i=0;i<count;i++)
	{
		cout<<" Roll no ";
		cin>>st[i].rollno;
		cout<<" name ";
		cin>>st[i].name;
	}
	cout<<"list of students "<<endl;
	for(i=0;i<count;i++)
        {
                cout<<" Roll no "<<st[i].rollno;
                cout<<" name "<<st[i].name<<endl;
		cout<<"address of each "<<&st[i].rollno<<endl;
		
        }
	return 0;
}

