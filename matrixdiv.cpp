#include<bits/stdc++.h>
using namespace std;

int fun(int arr[], int n)
{
    vector<int> v1;
    vector<int> v2;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            v1.push_back(arr[i]);
        }
        else{
            v2.push_back(arr[i]);
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=i+1;j<=v1.size();j++)
        {
            if(v1[i]>v1[j])
            {
                swap(v1[i],v1[j]);
            }
        }
    }
    for(int i=0;i<v2.size();i++)
    {
        for(int j=i+1;j<=v2.size();j++)
        {
            if(v2[i]>v2[j])
            {
                swap(v2[i],v2[j]);
            }
        }
    }
    cout<<v1.size();
}

int main()
{
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fun(arr,n);
}