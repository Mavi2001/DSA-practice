#include<bits/stdc++.h>
using namespace std;

int merge(int arr1[], int arr2[], int m, int n)
{
    vector<int>v;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]>=arr2[j]){
            v.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
    }
    while(i<m)
    {
        v.push_back(arr1[i++]);
    }
    while(j<n)
    {
        v.push_back(arr2[j++]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int m,n;
    cout<<"Enter the size of the arr1: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<m ;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the size of the arr2: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n ;i++)
    {
        cin>>arr2[i];
    }

    merge(arr1,arr2,m,n);
}