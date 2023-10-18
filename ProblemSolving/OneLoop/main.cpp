#include <bits/stdc++.h>
using namespace std;

int main()
{
    //*number of row n (user i/p) .
    int n,m; 
    cout<<"Number of row : ";
    cin >>n; // take input as number of line.
    
    for(int i = 1; i<=n; i++)
    {
        if(i%2==1) //if line number is odd
        {
            cout << "Row : " << i << "\t\t";
            //!here i used 3 because one row contain three digit if it,s four or any number then i used here 4 or any number.
            cout<<((3*i)-2) <<"\t" <<((3*i)-1) <<"\t" <<((3*i)-0)<<endl; 
        }
        else // even
        {
            cout << "Row : " << i << "\t\t";
           cout<<((3*i)-0) <<"\t"<<((3*i)-1) <<"\t" <<((3*i)-2)<<endl;
        }
    }
    return 0;
}