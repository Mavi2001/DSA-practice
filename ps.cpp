#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1,s=0,x;
    cout<<"Enter the number:\n";
    cin>>n;
    for(int i=0;n>0;i++)
    {
        x = n%10;
        p = p*x;
        s = s+x;
        n = n/10;
    }
    cout<<p-s<<endl;
}