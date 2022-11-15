#include <iostream>

using namespace std;

class Myclass
{
    int who;
    public:
    Myclass(int n)
    {
        who = n;
        cout<<"constructor" <<who <<endl;
    }
    ~Myclass()
    {
        cout<< "Destructor" <<who <<endl;
    }
    int id()
    {
        return who;
    }
};

//now o is passed by referance.
void f(Myclass &o)
{
    cout<<"Received" <<o.id() <<endl;
}

int main()
{
    Myclass x(1);

    f(x);

    return 0;
}