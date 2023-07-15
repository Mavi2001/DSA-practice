#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0,k;
    cout<<"Enter the binary number:\n";
    cin>>n;
    while(n!=0)
    {
        k = n%10;
        if(k==1)
        {
            count++;
        }
        n = n/10;
    }
    cout<<count;
}