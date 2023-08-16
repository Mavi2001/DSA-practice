/*Square root of a number using binary search*/

#include<bits/stdc++.h>
using namespace std;
int sqrt(int n) //function to calculate the integer part 
{
    int s=0,e=n,ans=-1;
    int m = s + (e-s)/2;
    while(s<=e)
    {
        long long int sq = m*m;
        if(sq==n)
        {
            ans = m;
            break;
        }
        else if(sq<n){
            ans=m;
            s = m+1;
        }
        else if(sq>n){
            e = m-1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}

double precision(int n, int p , int ans)
{
    double factor = 1;
    double res = ans;
    for(int i=0;i<p;i++)
    {
        factor = factor/10;
        for(double j = res; j*j<n ;j+=factor)
        {
            res = j;
        }
    } 
    cout<<"The answer is : "<<res<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = sqrt(n);
    precision(n,3,ans);

}