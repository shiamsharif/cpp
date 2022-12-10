//06.12.2022
/*
inheritance chera overriding hoi na. *****

*/
#include <iostream>
using namespace std;

class Father 
{
    public:
    void display()
    {
        cout<<" Father"<<endl;
    }
};

class Son : public Father
{
    public:
    void display()
    {
        cout<< "Son"<<endl;
    }
};

int main()
{
    Son obj;
    obj.display();

    return 0;
}