/*Intersection of two non decreasing arrays */

#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(int arr1[], int arr2[], int m,int n)
{
    vector<int>ans;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main()
{
    int m,n;
    cout<<"Enter the size of the array1 :";
    cin>>m;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of the array2 :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int> k = intersection(arr1,arr2,m,n);
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i];
    }
}