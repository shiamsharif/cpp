//Onlineclass 29.11.2022
#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
    person(){}
    void display()
    {
       // cout<<"Person class : "<<endl;
        cout<<"NAME : "<<name <<endl;
        cout<<"AGE  : "<<age <<endl;
    }
};

// class student
// {
//     public:
//     string name;
//     int age;
//     int id;
//     student(){}
//      void display2()
//     {
//         cout<<"Student class : "<<endl;
//         cout<<"NAME : "<<name <<endl;
//         cout<<"AGE  : "<<age <<endl;
//         cout<<"ID   : "<<id <<endl;
//     }
// };

class student : public person
{
    public:
    int id;
    student (){}
    void display2()
    {
        cout<<"Student class :"<<endl;
        display();
        cout<<"ID   : "<<id <<endl;
    }
}; 

int main()
{
    person pob1;
    pob1.name ="Shiam sharif";
    pob1.age =21;
    pob1.display();

    cout<<endl;

    student sob1;
    sob1.name ="Shiam Sharif";
    sob1.age =24;
    sob1.id =106;
    sob1.display2();

    return 0;
}