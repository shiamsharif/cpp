#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name1[] = "arib";
    char name2[] = " labib";

    strcat(name1,name2);
    cout<< name1;

    return 0;
}