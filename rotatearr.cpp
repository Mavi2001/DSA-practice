#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n, int k)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i]; 
    }
    arr = temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"How many places to rotate: ";
    cin>>k;
    rotate(arr,n,k);
}