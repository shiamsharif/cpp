#include <iostream>
#include <cmath>


using namespace std;

void funcRound(double &num);

int main()
{
    double i = 104.4;
    double x;

    cout<<i<< "rounded is ";
    funcRound(i);
    cout<< i <<endl;

    i = 10.9;
    cout<< i << "rounded is ";
    funcRound(i);
    cout<< i <<endl;

    return 0;

}

void funcRound(double &num)
{
    double frac;
    double val;

    frac = modf(num, &val);
    if(frac<0.5)
    {
        num = val;
    }

    else
    {
        num = val+1.0;
    }
}