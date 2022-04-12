#include <iostream>
using namespace std;

class booking
{
    int Booking_id=0;
    string Time;
    string Restaurant;
    string Destination;
    public:
    booking()//int booking_id,string& time,string& restaurant,string& destination
    {   cout<<"id=";
        cin>>Booking_id;
        cout<<"time=";
        cin>>Time;
        cout<<"restaurant=";
        cin>>Restaurant;
        cout<<"destination=";
        cin>>Destination;
        cout<<"orderplaced:\nid="<<Booking_id<<" time="<<Time<<endl;
    }
    ~booking()
    {
        cout<<"order_deliverd"<<endl;
    }
};

int main()
{
    booking * Book_log[10];
    for(int i=0;i<10;i++)
    {
        Book_log[i] = new booking; 
    }
    for(int i=0;i<10;i++)
    {
        delete Book_log[i]; 
    }
    return 0;
}