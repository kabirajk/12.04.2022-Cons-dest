#include <iostream>

using namespace std;

class time
{
    int HH=0;
    int MM=0;
    int SS=0;
    int Is_pm=0;
    string Date;
    public:
    time()
    {
    }
    time(int hh,int mm=0,int ss=0,string is_pm=0,string date="Nope")
    {
        HH=hh;
        MM=mm;
        SS=ss;
        Is_pm=is_pm=="AM"?0:1;;
        Date=date;
    }
    void print()
    {
        if (HH!=0)
            cout<<"HH="<<HH;
        if (MM!=0) 
            cout<<":MM="<<MM;
        if (SS!=0) 
            cout<<":SS="<<SS;
        if (Is_pm!=0)
            cout<<":"<<( Is_pm==0?"AM":"PM");
        if (Date!="Nope")
            cout<<" | "<<Date<<endl;
        else    
            cout<<endl;
    }
};
int main()
{
    time t4(12,0,16,"PM","12.04.2022");
    t4.print();
    return 0;
}