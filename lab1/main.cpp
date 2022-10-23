#include <iostream>

using namespace std;

class myclass{
    int a;
    public:
    myclass(int i)
    {
        a=i;
    }
    int get_a()
    {
        return a;
    }
};

int sqr(myclass ob)
{
    return ob.get_a() * ob.get_a();
}

int main()
{
    myclass ob1(10), ob2(5);
    
    cout<< sqr(ob1) <<endl;
    cout<< sqr(ob2) <<endl;

    return 0;
}

