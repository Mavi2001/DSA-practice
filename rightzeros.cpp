#include<bits/stdc++.h>
using namespace std;

int right0(int arr[], int n)
{
    int i = 0;
    for(int j=0; j<n; j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
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
    right0(arr,n);
}
