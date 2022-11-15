#include <iostream>

using namespace std;

int main()
{
    int* p;

    p= new int[5];

    if(!p)
    {
        cout<< "Allocation ERROE. \n";
        return 0;
    }
    int i;
    for(i=0; i<5; i++)
    {
        p[i] =i;
    }
    for(i=0; i<5; i++)
    {
        cout<< "Here is integer at p["<< i <<"]: ";
        cout<< p[i] <<endl;
    }

    delete [] p; //release memory in array;

    return 0;
}