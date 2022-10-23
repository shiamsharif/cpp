#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[]="Shiam sharif";
    char name2[15];

    int len = strlen(name);
    cout<< "the length is: " << len <<endl;

    strcpy(name2,name);  // string copy function.
    cout<<"NAMe2 is: " << name2;


    return 0;
}