#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cout<<"Enter the no of rows:\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<k<<"\t";
            k++;
        }
        cout<<"\n";
    }
}