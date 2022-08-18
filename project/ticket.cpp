#include<iostream>
using namespace std;
int count=0;
class ticket
{
    public:
    string name[5];
    int age;
    //int seats[5];
    int no;
    void reservation()
    {
        do
        {
            
            int n;
            cout<<"welcome to reservation"<<endl;
            cout<<"1. add passenger"<<endl;
            cout<<"2. delete passenger"<<endl;
            cout<<"3. confrom"<<endl;
            cin>>n;
            switch(n)
            {
                case 1:
                    if(count<5)
                    {
                        cout<<"Enter the passenger name"<<endl;
                        cin>>name;
                        cout<<"enter the age of passenger"<<endl;
                        cin>>age;
                        count++;
                    }
                    else
                    {
                        cout<<"bus is full"<<endl;
                    }
                    break;
                case 3:
                    cout<<"confrom ticket"<<endl;
                    break;
                default:
                    cout<<"wrong option"<<endl;
            }

        }while(n!=3);
    }
    void show()
    {

    }   
    




};

int main()
{
    int choice;

    cout<<"-------Bus booking system ----------"<<endl;
    cout<<"1. book ticket/n 2. ticket status"<<endl;
    switch (choice)
    {
    case 1:
        ticket t1;

        break;
    case 2:
        break;
    default:
        cout<<"enter the valid choice"<<endl;
        break;
    }
}