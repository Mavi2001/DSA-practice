#include<bits/stdc++.h>
using namespace std;

int check(int arr[], int n, int x){
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%x == 0){
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    int ans = check(arr,n,x);
    cout<<"the answer is : "<<ans;
}