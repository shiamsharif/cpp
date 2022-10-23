#include <iostream>
#include <cstring>

using namespace std;

class student
{
    string name;

    public:
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
};

int main()
{
    student s;
    s.setname("shiam");
    cout << s.getname();

    return 0; 
}