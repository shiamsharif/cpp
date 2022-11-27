#include <iostream>
using namespace std;

class Shiam
{
    int a;
    public:
    Shiam()
    {
        cout<<"Defult constructor.\n";
    }
    Shiam(int x)
    {
        a=x;
    }
    Shiam(Shiam &obj)
    {
        a = obj.a;  
     //obj3.a = obj.a;
    }
    void show()
    {
        cout <<a <<endl;
    }
};

int main()
{
    Shiam ob1(10);
    Shiam ob2;
    ob2.show();

    ob2 = ob1;
   
    ob1.show();
    ob2.show();

    Shiam ob3(ob1);
    ob3.show();

    Shiam ob4 = ob1;
    ob4.show();

    return 0;
}