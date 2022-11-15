#include <iostream>
using namespace std;

class Myclass
{
    int a;
    public:
    Myclass(int i)
    {
        a=i;
    }
    int get_a()
    {
        return a;
    }
};

int sqrt(Myclass ob)
{
    return ob.get_a() * ob.get_a();
}

int main()
{
    Myclass ob1(10), ob2(110);

    cout << sqrt(ob1) <<endl;
    cout << sqrt(ob2) <<endl;

    return 0;
}