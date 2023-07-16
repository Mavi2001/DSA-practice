#include<bits/stdc++.h>
using namespace std;
int printvec(vector<int>&v)
{
    cout<<"The size of the vector is:"<<v.size()<<endl;
    cout<<"The elements are:\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"Enter number of vectors:\n";
    int N;
    cin>>N;
    vector<int> v[N];  //here we have an array of N vectors i.e., the elements of the array are N vectors.
    cout<<"Enter the vectors:\n";
    for(int i=0;i<N;i++)
    {
        cout<<"Enter the size of vector"<<i+1<<":\n";
        int n;
        cin>>n;
        cout<<"Enter the elements of the vector:\n";
        for(int j=0;j<n;j++)
        {
            int x;  //elements of the vector
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        printvec(v[i]);
    }
    

}