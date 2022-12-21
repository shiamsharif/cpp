// accessing objects of derived class through the reference of base class.***
#include<iostream>
using namespace std;

class A
{
    public:
    virtual void display()
    {
        cout<<"Class A.\n";
    }
};

class B : public A
{
    public:
    void display()
    {
        cout<<"Class B.\n";
    }
};

class C : public A
{
    public:
    void display()
    {
        cout<<"Class C.\n";
    }
};

int main()
{
    A *p;
    B ob1;
    p=&ob1;
    p->display();

    C ob2;
    p=&ob2;
    p->display();

    return 0;
}