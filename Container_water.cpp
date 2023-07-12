#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],n;
    int max=0;
    cout<<"Enter the size:\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
            int area = min(arr[i],arr[j])*(j-i);
            if(area>max)
            max=area;
           
        }
    }
 cout<<max<<"\t";
}