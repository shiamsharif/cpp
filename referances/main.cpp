#include <iostream>

using namespace std;

void f(int* n); //use a pointer parameter;

int main()
{
    int i = 0;

    f(&i);

    cout<< "Here is i,s new value: "<<i <<endl;

    return 0;
}

void f(int* n)
{
    *n =100;
}