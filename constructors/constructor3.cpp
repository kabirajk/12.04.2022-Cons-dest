#include <iostream>
using namespace std;
//anonymus object
class file
{   //string as file
    string s;
    string Name;
    public:
    file()
    {
        cout<<"enter the file path = ";
        cin>>s;
        cout<<"enter the Name";
        cin>>Name;
    }
    //file copy
    file(file &f)
    { 
        s=f.s;
        Name=f.Name;
    }
    // create shortcut
    file(string src)
    {
        s=src;
        cout<<"shortcut for "<<*(ref())<<endl;
        Name="shortcut";
    }    
    //move
    file(file & src,file& dest)
    {
        dest.Name=src.Name;
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
    file(f3,f2);//anonnymus object
    file(ff,f);//they have “expression scope”, meaning they are created, evaluated, and destroyed all within a single expression.
    //deleted
    f3.print();
    f2.print();
    ff.print();
    f.print();
    return 0;
}