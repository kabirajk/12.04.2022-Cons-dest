#include <iostream>
using namespace std;

class file
{   //string as file
    string s;
    public:
    file()
    {
        cout<<"enter the file path = ";
        cin>>s;
    }
    //file copy
    file(file &f)
    { 
        s=f.s;
    }
    // create shortcut
    file(string src)
    {
        s=src;
        cout<<"shortcut for "<<*(ref())<<endl;
    }    
    //move
    file(file & src,file& dest)
    {
        dest.s=src.s;
        src.s=src.s+"Deleted";
    }
    //shortcut
    string * ref()
    {
        return &s;
    }
    
    void print()
    {
        cout<<"dir://"<<s<<endl;
    }
};

int main()
{
    file f;
    f.print();
    file ff;
    //coping
    file f2(ff);
    f2.print();
    //creating short cut
    file f3("E://");
    file(f3,f2);
    //deleted
    f3.print();
    return 0;
}