//06.12.2022
//Onlineclass 29.11.2022
#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
    person(){}
    virtual void display()
    {
       // cout<<"Person class : "<<endl;
        cout<<"NAME : "<<name <<endl;
        cout<<"AGE  : "<<age <<endl;
    }
};

class student : public person
{
    public:
    int id;
    student (){}
    virtual void display()
    {
        cout<<"Student class :"<<endl;
        display();
        cout<<"ID   : "<<id <<endl;
    }

}; 

class Child : public student
{
    public:
    virtual void display()
    {
        cout<< "Child : "<<endl;
    }
    Child(){}
};

int main()
{
    Child pob1;
    pob1.name ="Shiam sharif";
    pob1.age =21;
    pob1.display();

    cout<<endl;

    return 0;
}