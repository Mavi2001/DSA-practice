/*To find the pivot element in a rotated array e.g., {1,2,3,7,9}-->{7,9,1,2,3} here the pivot element id "1" */

#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[] , int n)
{
    int s=0,e=n-1;
    int m = s + (e-s)/2;
    while(s<e)
    {
        if(arr[0]<arr[m])
        {
            s = m + 1;
        }
        else{
            e = m;
        }
        m = s + (e-s)/2;
    }
    cout<<"The index of pivot element is : "<<s<<endl;
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
    pivot(arr,n);
}