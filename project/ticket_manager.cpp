#include<map>
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