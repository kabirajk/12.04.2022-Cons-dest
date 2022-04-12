#include <iostream>
using namespace std;
//session maintainance
class auth
{   public:
    auth()
    {
        cout<<"logged in: started"<<endl;
        //get auth()
    }
    //do sum work
    ~auth()
    {  
        cout<<"logged out"<<endl;
    }

};
class session
{   public:
    auth* ses=nullptr;
    session()
    {   if (ses!=nullptr)
            delete ses;
        ses=new auth;
    }
    void logout()
    {
        delete ses;
        ses=nullptr;
    }
    ~session()
    {
        delete ses;
        ses=nullptr;
    }
};

int main()
{
    session s;
    s.logout();
    session s2;
    return 0;
}