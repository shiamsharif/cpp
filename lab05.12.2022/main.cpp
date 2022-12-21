#include <iostream>
using namespace std;

class Vehicle
{
public:
    string engine;
    void display1()
    {
        cout<<"Engine : "<<engine<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int wheel;
    void display2()
    {
        display1();
        cout<<"Number of wheels : "<<wheel <<endl;
    }
};

int main()
{
    Car obj;
    obj.engine ="BMW X7❤‍🔥";
    obj.wheel = 4;
    obj.display2();

    return 0;
}