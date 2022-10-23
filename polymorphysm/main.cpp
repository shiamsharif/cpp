#include <iostream>

using namespace std;

class person
{
    public:
    virtual void display()
    {
        cout<< "I am a person." <<endl;
    }
};

class student : public person
{
    public:
    void display()
    {
        cout<< "I am a student." <<endl;
    }
};

class teacher : public person
{
    public:
    void display()
    {
        cout<< "I am a teachar." <<endl;
    }
};

int main()
{
    teacher t;
    student s;
    person *p; //super-class pointer veriable.

    p = &s;

    p -> display();
    //t.display();
    //s.display();
    
    p = &t;
    p -> display();
    
    return 0;
}