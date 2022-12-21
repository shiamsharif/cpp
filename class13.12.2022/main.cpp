//inheritance korle constructor kemon kore kaj kore.
#include <iostream>
using namespace std;


class Father
{
    public:
    Father()
    {
        cout<<"parent\n";
    }
};
// class Mother
// {
//     public:
//     Mother()
//     {
//         cout<<"Mother class.\n";
//     }
// };
class Son : public Father
{
    public:
    string name;
    Son()
    {
        cout<<"Son\n";
    }
    Son(string n)
    {
        name = n;
        cout<<"shiam.\n";
    }
};

// class Grandchild : public Son
// {
//     public:
//     Grandchild()
//     {
//         cout<<"Grandchild\n";
//     }
// };



int main()
{
   // Parent obj;
    Son ob1("sharif");
   //Grandchild ob1;


    return 0;

}