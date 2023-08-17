#include<bits/stdc++.h>
using namespace std;

int ins(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        for(int j = i-1 ; j>=0 ;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
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
    ins(arr,n);
}