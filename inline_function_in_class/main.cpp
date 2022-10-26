#include <iostream>
using namespace std;

class even
{
    int a;
public:
    even(int m);
    int iseven();
};

even::even(int m)
{
    a=m;
}
inline int even::iseven()
{
    return a % 2;
}

int main()
{
    int a, b;
    cin>>a>>b;
    even ob1(a), ob2(b);
    if(ob1.iseven() == 0)
    {
        cout<<"A is Even.\n";
    }
    if(ob2.iseven() == 0)
    {
        cout<<"B is Even.\n";
    }
    
    return 0;
}