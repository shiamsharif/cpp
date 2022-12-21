#include <iostream>
using namespace std;

class Father
{
    //string name;
    public:
    string name;
    Father()
    {

    }
    Father(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout<<"NAME : "<<name<<endl;
    }
};

class Son : public Father
{
    public:
    //string name;
    int age;
    int id;
    Son()
    {

    }
    Son(string name,int age,int id): Father(name)
    {
        this->age=age;
        this->id=id;
    }
    void display()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"ID : "<<id<<endl;
    }
};

int main()
{
    //Father ob;
    // ob.name ="shiam sharif";
    // ob.display();
    Son ob1("shiam",22,32);
    // ob1.age =22;
    // ob1.id = 0032;
    ob1.display();

    return 0;
}
