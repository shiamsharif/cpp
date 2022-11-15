#include <iostream>
#include <cstring>

using namespace std;

class Shiam
{
        char s[80];
    public:
        void show()
        {
            cout<<s<<endl;
        }
        void set(char* str)
        {
            strcpy(s,str);
        }
};

Shiam in_put()
{
        char s[80];
        Shiam str;

        cout<< "Enter a string: ";
        cin >> s;

        str.set(s);

        return str;
}

int main()
{
    Shiam ob;

    ob = in_put();
    ob.show();

    return 0;
}