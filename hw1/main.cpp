#include <iostream>
using namespace std;

class Animal
{
    public:
    string color;
    string type;

    void display()
    {
        cout<<"Color : "<<color<<endl;
        cout<<"Type : "<<type<<endl;
    }
};

class Cat : public Animal
{
    int no_of_legs;
    public:
    Cat(){}
    Cat(int a)
    {
        no_of_legs = a;
    }
    void show()
    {
        display();
        cout<<"Number of legs : "<<no_of_legs<<endl;
    }
};

int main()
{
    Cat obj;
    obj.color = "Black";
    obj.type = "Wild";
    obj.on
}