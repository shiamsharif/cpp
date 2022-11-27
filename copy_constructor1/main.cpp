#include <iostream>

using namespace std;

class Shiam
{
    int i;
public:
    Shiam(){}
    Shiam(int x)
    {
        i = x;
    }
    void display()
    {
        cout <<i <<endl;
    }

};
int main()
{
    Shiam ob1(10);
    ob1.display();

    //implement copy constructor
    Shiam ob2(ob1);
    ob2.display();

    return 0;
    
}