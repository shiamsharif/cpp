#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Number of row : ";
    cin >>n;
    for(int i = 1; i<=n; i++)
    {
        if(i%2==1)
        {
            cout << "Row : " << i << "\t\t";
            cout<<((5*i)-4) <<"\t"<<((5*i)-3) <<"\t" <<((5*i)-2) <<"\t" <<((5*i)-1) <<"\t" <<((5*i)-0)<<endl; 
        }
        else
        {
            cout << "Row : " << i << "\t\t";
           cout<<((5*i)-0) <<"\t"<<((5*i)-1) <<"\t" <<((5*i)-2) <<"\t" <<((5*i)-3) <<"\t" <<((5*i)-4)<<endl;
        }
    }
}