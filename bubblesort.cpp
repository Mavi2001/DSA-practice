#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n)
{
    for(int i=1; i<n; i++)     //total rounds are n-1
    {
        for(int j=0 ; j<n-1 ;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bs(arr,n);
}