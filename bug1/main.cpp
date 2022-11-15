#include <iostream>
using namespace std;

int glo = 10;

void shiam()
{
    cout<< glo <<endl;
}

int main()
{
    cout<<"in main function: " <<glo <<endl;

    int glo = 100;
    cout<< glo <<endl;
    cout<< ::glo <<endl; //scope resulation operator;

    // cout<<shiam() <<endl;    <- here is the bug1.
    shiam();
    cout<<endl;

    return 0;
}