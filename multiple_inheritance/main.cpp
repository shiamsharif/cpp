//problem in output.


#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(){}
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
    }
};

class Student
{
    
    public:
    int id;
    Student(){}
    void display()
    {
         cout<<"ID   : "<<id<<endl;
    }
};

class Child : public Person , public Student
{
    public:
    Child(){}
    void display()
    {
        display();
        display();
    }

};

int main()
{
    Child ob;
    ob.name ="Shiam";
    ob.age =22;
    ob.id = 32;
    ob.display();

    return 0;
}