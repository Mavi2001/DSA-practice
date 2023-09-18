#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n,s;
    cin>>n;
    int m = sqrt(n);
    // cout<<"m is: "<<m<<endl;
    float k = sqrt(n);
    // cout<<"k is: "<<k;
    if(k <= m + 0.5){
        s = m*m;
    }
    else{
        m++;
        s = m*m;
    }
    cout<<"Nearst square is : "<<s<<endl;
    int d = abs(n-s);
    cout<<d;
 }