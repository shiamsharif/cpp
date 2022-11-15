#include <iostream>

using namespace std;

class Myclass
{
    int who;
public:
    Myclass(int n)
    {
        who = n;
        cout<<"Construction" <<who <<endl;
    }
    ~Myclass()
    {
        cout<<"Destructor" <<who <<endl;
    }
    int id()
    {
        return who;
    }
};

// o is passing by value.
void f(Myclass o)
{
    cout<<"Received" <<o.id() <<endl;
}

int main()
{
    Myclass x(1);

    f(x);

    return 0;
}