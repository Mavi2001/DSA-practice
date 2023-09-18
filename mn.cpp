#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,s1=0,s2=0;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%6==0)
        {
            s1 = s1 + i;
        }
        else{
            s2 = s2 + i;
        }
    }
    cout<<"No's divisible sum: "<<s1<<endl;
    cout<<"No's not divisible sum: "<<s2<<endl;
    cout<<"Distinct sum: "<<abs(s2-s1)<<endl;
    
    
}