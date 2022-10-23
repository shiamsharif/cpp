#include <iostream>

using namespace std;

/*
# function_overriding.
1. parameter must be SAME.
2. function overriding in more than one 
   class (superclass,subclass).
3. used inheritance.
4. one function hide another 
   function.
5. return type must be same.

# RUNTIME POLYMORPHISM.
*/

class person
{
    public:
    void display()
    {
        cout<< "i am a person.\n";
    }
};

class student : public person
{
    public:
    void display()
    {
        cout<< "i am a student.\n";
    }
};

class teacher : public person
{
    public:
    void display()
    {
        cout<< "i am a teacher.\n";
    }
};

int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();

    return 0;
}