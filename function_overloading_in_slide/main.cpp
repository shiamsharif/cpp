#include <iostream>
using namespace std;

class Father
{
    public:
    void display()
    {
        cout<<"Father Class.\n";
    }
};
class Son : public Father
{
    public:
    void display()
    {
        cout<<"Son class.\n";
    }

};
class Daughter : public Father
{
    public:
    void display()
    {
        cout<<"Daughter class.\n";
    }
};

int main()
{
    Father ob1;
    ob1.display();

    Son ob2;
    ob2.display();

    Daughter ob3;
    ob3.display();

    return 0;
}