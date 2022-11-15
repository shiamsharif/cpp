/*
Write a class named "Volume" which has
a member function "calVol" that counts
the volume of a cube (a*a*a) and cylinder (PI*r*r*h)
using function overloding.
*/

#include <iostream>
#define PI 3.1416

using namespace std;

class Volume
{
    public:
    void calVol(float a)
    {
        float result =(a*a*a);
        cout<<"The Volume of cube is: "<<result <<endl;
    }
    void calVol(float r,float h)
    {
        float result = PI * (r*r) * h;
         cout<<"The Volume of cylinder is: "<<result <<endl;
    }    
};

int main()
{
    Volume ob1,ob2;

    ob1.calVol(10);
    ob2.calVol(10,5);

    return 0;
}