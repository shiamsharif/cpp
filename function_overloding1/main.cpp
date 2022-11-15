#include <iostream>
#include <cstdlib>

using namespace std;

class array
{
    int *p;
    int size;
    public:
    array(int sz)
    {
        p = new int[sz];
        if(!p)
        {
            exit(1);
        }
        size = sz;
        cout<<"Using 'normal' constructor" <<endl;
    }
    ~array()
    {
        delete [] p;
    }

    //copy constructor;
    array(const array &a);

    void put(int i, int j)
    {
        if(i>0 && i<size)
        {
            p[i] =j;
        }
    }

    int get(int i)
    {
        return p[i];
    }
};

array::array(const array &a)
{
    int i;

    size = a.size;
    p=new int[a.size]; //allocate memory for copy.
    if(!p)
    {
        exit(1);
    }
    for(i=0; i<a.size; i++)
    {
        p[i] = a.p[i]; //copy contents
    }
    cout <<"Using copy constructor" <<endl;
}

int main()
{
    array num(10); //this calls "normal" constructor.
    int i;

    for(i=0; i<10; i++)
    {
        num.put(i,i);
    }
    //display num.
    for(i=9; i>=0; i--)
    {
        cout <<num.get(i);
        cout <<endl;
    }
    //create another array and initialize with num.
    array x =num;  //this invokes copy constructor.

    //display x.
    for(i=0; i<10; i++)
    {
        cout<<x.get(i);
        cout<< endl;
    }

    return 0;
}