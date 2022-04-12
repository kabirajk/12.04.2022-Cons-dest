//normal destrcutor
#include <iostream>
using namespace std;

class myclass
{
    public:
    myclass()
    {
        cout<<"created"<<endl;
    }
    ~myclass()
    {
        cout<<"deleted"<<endl;
    }
};

int main()
{

    myclass * myc= new myclass;
    delete myc;
    return 0;
}