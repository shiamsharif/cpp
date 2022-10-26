#include <iostream>
using namespace std;

class Myclass
{
    int a,b;
public:
    void set(int i, int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<< a << " " << b <<endl;
    }
};

class Yourclass
{
    int a,b;
public:
    void set(int i, int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<< a << " " << b <<endl;
    }
    
};

int main()
{
    Myclass ob1;
    Yourclass ob2;

    ob1.set(100,200);
    //ob2=ob1; 
    
    ob1.show();
    ob2.show();

    return 0;
}