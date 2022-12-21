//multilevel inheritance slide-8(7page);

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(){}
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};

class Student : public Person
{
public:
    int id;
    Student(){}
    void display2()
    {
        display1();
        cout<<"ID   : "<<id<<endl;
    }
};

class Child : public Student
{
    public:
    float cgpa;
    void display3()
    {
        display2();
        cout<<"CGPA : "<<cgpa<<endl;
    }
};

int main()
{
    Child obj;
    obj.name ="Shiam";
    obj.age =22;
    obj.id =32;
    obj.cgpa =3.69;

    obj.display1();
    cout<<"================\n";
    obj.display2();
    cout<<"================\n";
    obj.display3();

    return 0;
}