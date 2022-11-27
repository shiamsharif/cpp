#include <iostream>
using namespace std;

int sum(double a, double b)
{
    cout<<"Sum of int is: "<<a+b <<endl;
}

double sum(int a, int b)
{
    cout<<"Sum of float is: "<<a+b <<endl;
}

int main()
{
    sum(12,13);
    return 0;
}    