#include <iostream>
using namespace std;

class Shiam
{
    int a,b;
    public:
    Shiam(int n, int m)
    {
        a=n;
        b=m;
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
    Shiam ob[4] ={Shiam(1,2),Shiam(3,4),Shiam(5,6),Shiam(7,8)};
    int i;
    Shiam* p;
    p=ob;

    for(i=0; i<4; i++)
    {
        cout<<p->get_a() <<" ";
        cout<<p->get_b() <<endl;
        p++;
    }
    cout<<endl;
    return 0;
}