#include <iostream>
using namespace std;

/*
If a function is inline, the compiler places a copy of the code of that
function at each point where the function is called at compile time.
*/

inline int iseven(int x)
{
    return x % 2;
}

int main()
{
    int a,b;
    cout<< "insert two number:\n";
    cin>>a>>b;
    if(iseven(a) == 0)
    {
        cout<< "A is even.\n";
    }
    if(iseven(b) == 0)
    {
        cout<< "B is even.\n";
    }
    return 0;
}