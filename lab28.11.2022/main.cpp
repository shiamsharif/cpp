#include <iostream>
using namespace std;

class overloading
{
    int a,b;
    public:
    overloading (int x =0,int y =0)
    {
        a=x;
        b=y;
    }
    int operator--(int x)
    {
        a = a-1;
        b = b-1;

        return a;
    }
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};

int main()
{
    overloading ob(10,20);

    cout<< ob.get_a() << "  "<<ob.get_b()<<endl;
    ob--;
    cout<< ob.get_a() << "  "<<ob.get_b()<<endl;

    return 0; 
}