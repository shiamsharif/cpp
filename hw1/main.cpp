/*
1. Create a class named Animal which has two public member variables color(string) and type(
string). Create another class named cat which has a private member variable no_of_legs and
cat class inherits Animal class. In the main function create an object of cat class and show
those values using member function. (Single level inheritance)
*/

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
    Cat obj(10);
    obj.color = "Black";
    obj.type = "Wild";
    obj.display();
    cout<<endl;
    obj.show();

    return 0;

}