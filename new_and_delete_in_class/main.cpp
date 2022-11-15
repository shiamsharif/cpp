#include <iostream>

using namespace std;

class Shiam
{
    int i,j;
    public:
    Shiam(int a, int b)
    {
        i=a;
        j=b;
    }
    int get()
    {
        return i*j;
    }
};

int main()
{
    Shiam* p;

    p = new Shiam(5,6);
    if(!p)
    {
        cout << "Allocation Error.\n";
        return 1;
    }

    cout <<"product is: " <<p->get() <<endl;

    delete p;

    return 0;
}