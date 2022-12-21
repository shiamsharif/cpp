/*
Create a class named Subtraction that contains two privet member veriables(int).
In the main function creat two objects of that class and
subtract object2 from object1 using operator ovearloading  
*/

#include<iostream>
using namespace std;

class Subtraction
{
    int a;
    int b;
    public:
    Subtraction(int x=0,int y=0)
    {
        a =x;
        b =y;
    }
    Subtraction operator-(Subtraction ob1)
    {
        Subtraction ob3;
        ob3.a = a - ob1.a;
        ob3.b = b - ob1.b;

        return ob3;

    }
    
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }

};

int main()
{
    Subtraction ob1(5,3);
    Subtraction ob2(7,5);
    

    Subtraction ob4 = ob2 -  ob1;

    cout<<"Value :"<<ob4.get_a()<<"  "<<ob4.get_b()<<endl;

    return 0;
}

//output: Value :2  2