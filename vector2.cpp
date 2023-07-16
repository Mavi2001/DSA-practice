#include<bits/stdc++.h>
using namespace std;
int printvec(vector<int>&v)
{
    cout<<"The size of the vector is:"<<v.size()<<endl;
    cout<<"The elements are:\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}
int main()
{
    vector<int> v;
    cout<<"Enter initial size:\n";
    int x;
    cin>>x;
    cout<<"Enter the vector elements:\n";
    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    vector<int>v2 = v; //here v2 is just a ccopy of v, changes made in one don't affect on other.
    v.push_back(100);
    v2.push_back(200);
    v2.push_back(400);
    printvec(v);
    printvec(v2);


}