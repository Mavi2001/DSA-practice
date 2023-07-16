#include<bits/stdc++.h>
using namespace std;

int printvec(vector<int>&v)    
{
    cout<<"The vectors are:\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";    //prints one complete vector with all its elements.
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>>v; //this is vector of vectors, ecah element of vector v is a vector itself.
    int N;
    cout<<"Enter the number of vectors:\n";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"Enter size of vector"<<i+1<<":"<<endl;
        cin>>n;
        vector<int>temp;
        cout<<"Enter the elements of the vector:\n";
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);  //passing each vector one by one.
    }

}