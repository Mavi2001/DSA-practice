/*To find first and last position of an element array in a sorted array , concept: Binary Search*/

#include<bits/stdc++.h>
using namespace std;

int first(int arr[] , int n, int k)
{
    int s=0,e=n-1,ans = -1;
    int m = s + (e-s)/2;
    while(s<=e)
    {
        if(arr[m]==k)
        {
            ans = m;
            e = m - 1;
        }
        else if(arr[m]>k)
        {
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
    cout<<"The first position is : "<<ans<<endl;
}

int second(int arr[] , int n, int k)
{
    int s=0,e=n-1,ans = -1;
    int m = s + (e-s)/2;
    while(s<=e)
    {
        if(arr[m]==k)
        {
            ans = m;
            s = m + 1;
        }
        else if(arr[m]>k)
        {
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
    cout<<"The first position is : "<<ans<<endl;
}

int main()
{
    int n,k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to find in the array :";
    cin>>k;
    first(arr,n,k);
    second(arr,n,k);
}