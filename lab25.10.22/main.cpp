#include <iostream>
using namespace std;

class student
{
    int marks;
    public:
    student()
    {

    }
    student(int number) //int x = 10;
    {
        marks = number;
    }
    void set_marks(int i)
    {
        marks = i; //avg
    }
    int get_marks()
    {
        return marks;
    }
};

student totMarks(student ob1, student ob2)
{
    student ob3;
    int marks = ob1.get_marks() + ob2.get_marks();
    int avg =marks/2;
    ob3.set_marks(avg);
    return ob3;
}

int main()
{
    int number1, number2;
    cin>> number1 >>number2;
    student ob1(number1),ob2(number2); //student ob3
    student result = totMarks(ob1,ob2);
    cout<< result.get_marks() <<endl;
    return 0;
}