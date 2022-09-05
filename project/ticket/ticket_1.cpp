#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
class ticket_manager_IF
{
    public:
    virtual void book_ticket()=0;
    virtual void cancel_ticket()=0;
    virtual void prepared_chart()=0;

};
class ticket_manager
{
    public:
    map<string,map<int,string>> pass_list;
    //type,ticketif,ticketid
    void book_ticket()
    {
        cout<<"select the class "<<endl;
        cout<<"1. AC seater"<<endl;
        cout<<"2. AC sleeper"<<endl;
        cout<<"3. seater"<<endl;
        cout<<"4. sleeper"<<endl;
        int choice;
        cout<<"enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"------------AC seater------------"<<endl;
            //move to seater class
            break;
            case 2:
            cout<<"------------AC sleeper------------"<<endl;
            // move to sleeper class
            break;
            case 3:
            cout<<"------------Seater------------"<<endl;
            //move to seater class
            break;
            case 4:
            cout<<"--------------sleeper---------"<<endl;
            //move to sleeper class
            break;
            default:
            cout<<"wrong choice"<<endl;
            break;
        }
    }

};
class ticketIF
{
    public:
    //string name;
    
    
    
    

};
class seater
{
    public:
    string name;
    int age;
    static int book=0;// no of tickets booked
    void book()
    {
        cout<<"Passenger Name"<<endl;
        cin>>name;
        cout<<"Age"<<endl;
        cin>>age;
        book++;
    }    
};
class sleeper
{
    public:
    string name;
    int age;
    static int book=0;// no of tickets booked
    void book()
    {
        cout<<"Passenger Name"<<endl;
        cin>>name;
        cout<<"Age"<<endl;
        cin>>age;
        book++;
    }
};
class Ac_seater
{
    public:
    string name;
    int age;
    static int book=0;// no of tickets booked
    void book()
    {
        cout<<"Passenger Name"<<endl;
        cin>>name;
        cout<<"Age"<<endl;
        cin>>age;
        book++;
    }



};
class Ac_sleeper
{
    public:
    string name;
    int age;
    int n;
    static int book=0;// no of tickets booked
    void get_pass()
    {
        cout<<"No. of paseenger you want to book"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            book();
        }
    }
    void book()
    {
        cout<<"Passenger Name"<<endl;
        cin>>name;
        cout<<"Age"<<endl;
        cin>>age;
        book++;
    }
};


int main()
{

}