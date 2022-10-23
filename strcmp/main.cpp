#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name1[] = "shiam";
    char name2[] = "shiam";

    int value = strcmp(name1,name2);

    if(value == 0)
    {
        cout<< "String are equal.\n";

    }
    else
    {
        cout<< "String are not equal.\n";
    }

    return 0;
}