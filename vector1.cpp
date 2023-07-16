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
    v.push_back(5000);      //to insert a value at the end of the vector.
    v.pop_back();           //to remove values from the end of the vector.
    printvec(v);


}