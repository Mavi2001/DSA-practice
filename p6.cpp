#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the no. of rows:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        char p = (65 + (n-(i+1)));
        for(j=0;j<=i;j++)
        {
            cout<<p;
            p++;
        }
        cout<<"\n";
    }
}