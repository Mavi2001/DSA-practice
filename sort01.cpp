/*Sorting an array containing 0's and 1's in non decreasing order*/

#include<bits/stdc++.h>
using namespace std;

int sort01(int arr[] , int n)
{
    cout<<"inside :";
    int s=0,e=n-1,temp;
    
    while(s<e){
        if(arr[s]==0 && arr[e]==1)
        {
            s++;
            e--;
        }
        else if(arr[s]==0 && arr[e]==0){
            s++;
        }
        else if(arr[s]==1 && arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]==1 && arr[e]==1)
        {
            e--;
        }
    }

    cout<<"the output array is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    sort01(arr,n);
}