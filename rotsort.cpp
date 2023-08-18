#include<bits/stdc++.h>
using namespace std;

int rotsort(int arr[], int n)
{

    int count = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    cout<<count<<endl;
    return count;
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
    int k = rotsort(arr,n);
    if(k<=1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}