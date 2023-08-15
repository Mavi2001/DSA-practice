#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[] , int n , int k)
{
    int s=0,e=n-1;
    int m = s + (e-s)/2;
    while(s<=e)
    {
        if(arr[m]==k)
        {
            cout<<"The index is : "<<m<<endl;
            break;
        }
        else if(arr[m]>k){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
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
    BinarySearch(arr,n,k);
}