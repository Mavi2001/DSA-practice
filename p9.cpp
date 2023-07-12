#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of rows:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n-j<=n-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}