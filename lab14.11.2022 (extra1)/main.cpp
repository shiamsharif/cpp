#include <iostream>
#define PI 3.1416

using namespace std;

class Volume
{
    float a;
    float r;
    float h;
public:
    Volume(){}
    Volume(float aa)
    {
        a=aa;
    }
    Volume(float rr, float hh)
    {
        r=rr;
        h=hh;
    }
    float get_a()
    {
        return a;
    }
    float get_r()
    {
        return r;
    }
    float get_h()
    {
        return h;
    }
};

void cube(Volume ob)
{
    float result = ob.get_a() * ob.get_a() * ob.get_a();
    cout<<"The Volume of cube is: "<<result <<endl;
}


void cylinder(Volume ob)
{
    float result = PI * ob.get_r() * ob.get_r() * ob.get_h();
    cout<<"The Volume of cylinder is: "<<result <<endl;
}

int main()
{
    Volume ob1(10), ob2(10,5);

    cube(ob1);
    cylinder(ob2);

    return 0;
}