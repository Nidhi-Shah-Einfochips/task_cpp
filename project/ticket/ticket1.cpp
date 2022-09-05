#include<iostream>
#include<map>
using namespace std;
int count;
class ticket
{
    
    public:
    int ch;
    string name[5];
    int age[5];
    int n;
    map<int,string> passenger;
    int i;
    void reservation()
    {
        cout<<"welcme to reservation window"<<endl;
        
        do
        {
            
            cout<<"1. add passenger"<<endl;
            cout<<"2. delete passenger"<<endl;
            cout<<"3. exit "<<endl;
            cin>>ch;
            switch (ch)
            {
            case 1:
                cout<<"Enter the no seats you want to book"<<endl;
                cin>>n;
                if(count<5)
                {
                    for(i=1;i<=n;i++)
                    {
                        cout<<"passenger name"<<endl;
                        cin>>name[i];
                        passenger[i]=name[i];
                        count++;
                    }
                }
                else
                {
                    cout<<"bus is full"<<endl;
                }
                    break;
            case 2:
                cout<<"delete the passenger"<<endl;
                cout<<"enter the seat no. you want to delete"<<endl;
                cin>>i;
                //passenger.erase[i];
                break;
            case 3:
                cout<<"exit"<<endl;
                break;
            default:
                cout<<"wrong option"<<endl;
                break;
            }
        
        
            
            
        } while (ch!=3);
    }
    void show()
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" "<<name[i]<<endl;
            
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