/*Fnd the peak ndex in a mountain array*/

#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int n)
{
    int s = 0, e = n-1;
    int m = s + (e-s)/2;
    while (s<e)
    {
        if(arr[m]<arr[m+1])
        {
            s = m + 1;
        }
        else{
            e = m;
        }
        m = s + (e-s)/2;
    }
    cout<<"The peak index is : "<<s<<endl;
    
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
    peak(arr,n);
}