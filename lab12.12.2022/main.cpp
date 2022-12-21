#include <iostream>
using namespace std;

class Parent
{
    public:
    virtual void display()=0;
};

class Son : public Parent
{
    public:
    void display()
    {
        cout<<"From Son.\n";
    }
};

class Daughter : public Parent
{
    public:
    void display()
    {
        cout<<"From Daughter.\n";
    }
};

int main()
{
    Son ob1;
    ob1.display();

    Daughter ob2;
    ob2.display();

    return 0;
}