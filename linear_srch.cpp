#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mark=0;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be found:\n";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"Element found at position:"<<i+1<<endl;
            mark++;
        }
    }
    if(mark==0)
    cout<<"Element not found.";
    return 0;
}