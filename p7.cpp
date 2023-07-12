#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the no. of rows:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n-j <= i+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}