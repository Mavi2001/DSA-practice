#include<bits/stdc++.h>
using namespace std;
int printvec(vector<pair<int,int>>&v)
{
    cout<<"The size of the vector is:"<<v.size()<<endl;
    cout<<"The elements are:\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main()
{
    vector<pair<int,int>>v; //vector of pairs or manually vector<pair<int,int>>v = {{1,2},{2,3},{3,4}};
    //here each element of the vector is a pair of integer values.
    cout<<"Enter initial size:\n";
    int x;
    cin>>x;
    cout<<"Enter the vector elements:\n";
    for(int i=0;i<x;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    printvec(v);



}