//operator overloding.
   
#include <iostream>
using namespace std;

/*
7+5i
2+3i
3+3i
-----
12+11i (will be the output.)
*/

class Shiam
{
    int real ,img;
public:
    Shiam(int a=0 , int b=0)
    {
        real = a;
        img = b;
    }
    Shiam operator+(Shiam obj)
    {
        Shiam temp;
       // cout << "Temp Real: "<< temp.real <<" img : "<<temp.img <<"i" <<endl;
       // cout << "ob1 Real : "<< real      <<" Img : "<<img      <<"i" <<endl;
       // cout << "ob2 Real : "<<obj.real   <<" Img : "<<obj.img  <<"i" <<endl;

        temp.real = real + obj.real;
        temp.img  = img  + obj.img;

       // cout<<"\nComplex Number : "<<temp.real <<"+" <<temp.img <<"i" <<endl;
        
        return temp;
    }
    int getReal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }

};

int main()
{
    Shiam ob1(7,5);
    Shiam ob2(2,3);
    Shiam ob3(3,3);
    //Shiam ob3;

    Shiam ob4;

    ob4 = ob1+ob2+ob3;
    //ob1.operator+(ob2);

    //ob1.operator+(ob1);
    cout<<"\nComplex Number -> "<<ob4.getReal() <<"+" << ob4.getimg()<<"i" <<endl;
        

    return 0;
}