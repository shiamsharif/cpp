#include <iostream>

using namespace std;

int main()
{
    int num = 18;
    double sum;
    sum = num + 4.5;
/*
#####  IMPLICIT TYPE CONVERSION  #####
Here, 18 (int value) is converted automatically 
to 18.0(double value) before it is addad to 4.5;
*/
    cout<<"The Sum is: "<<sum <<endl;

    return 0;
}