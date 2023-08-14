//Find unique element from an array of size 2m+1 where m elements have occuence twice and 1 element 
//only once . Find that element.

#include<bits/stdc++.h>
using namespace std;
int find(int arr[] , int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = arr[i]^ans;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the od size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The unique element is :"<<find(arr,n)<<endl;
}