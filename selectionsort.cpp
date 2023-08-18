#include<bits/stdc++.h>
using namespace std;

int ss(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int minindex = i;
        for(int j=i+1 ; j<n ;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0 ;i<n; i++)
    {
        cin>>arr[i];
    }
    ss(arr,n);
}