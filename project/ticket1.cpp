#include<iostream>
using namespace std;
int count;
class ticket
{
    
    public:
    int ch;
    string name[5];
    int age[5];
    int n;
    void reservation()
    {
        cout<<"welcme to reservation window"<<endl;
        do
        {
            
            cout<<"1. add passenger"<<endl;
            cout<<"2.exit"<<endl;
            cin>>ch;
            switch (ch)
            {
            case 1:
                cout<<"Enter the no seats you want to book"<<endl;
                cin>>n;
                if(count<5)
                {
                    for(int i=0;i<n;i++)
                    {
                        cout<<"passenger name"<<endl;
                        cin>>name[i];
                        cout<<"age"<<endl;
                        cin>>age[i];
                        count++;
                    }
                }
                else
                {
                    cout<<"bus is full"<<endl;
                }
                    break;
            case 2:
                cout<<"exit"<<endl;
                break;
            default:
                cout<<"wrong option"<<endl;
                break;
            }
        
        
            
            
        } while (ch!=2);
    }
    void show()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"passenger name  "<<name[i]<<endl;
            cout<<"age  "<<age[i]<<endl;
        }
    }

};
int main()
{
    int choice;
    ticket t1;
    cout<<"-------Bus booking system ----------"<<endl;
    cout<<"1. book ticket\n2. ticket status"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        
        t1.reservation();
        t1.show();
        break;
        
    case 2:

        cout<<"ticket status"<<endl;
        break;
    default:
        cout<<"wrong option"<<endl;
        break;
    }
    return 0;
}