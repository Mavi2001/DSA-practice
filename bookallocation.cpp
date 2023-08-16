/*Given an array containing no. of pages of books in non decreasing order, there are m students, each 
student should recieve at least one book and each book should should be allocated. Books should be 
allocated in contiguous manner. Print maximum no. of pages assigned to a stuent should be minimum.*/

#include<bits/stdc++.h>
using namespace std;

// bool ispossible(int arr[], int n, int m, int mid);

bool ispossible(int arr[], int n, int m, int mid){
    int stu = 1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else{
            stu++;
            if(stu>m || arr[i]>mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
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
    cout<<"Enter the number of students: ";
    int m;
    cin>>m;

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"The answer is: "<<ans<<endl;
}

