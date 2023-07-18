//Unordered aps make use of hash tables.
//time complexity of insertion and accessing is O(1) this is average time complexity
//find erase clear all have O(1) time complexity.
//order doesn't matter
//any complex data type can be implemented.

//in previous question now some queries are given and each query consists a string
//we have to tell the frequency of that string

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of strings\n";
    int N;
    cin>>N;
    unordered_map<string, int> m;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        // cout<<m[s]<<endl;
    }
    cout<<"Enter the no. of queries:\n";
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>>str;
        cout<<m[str]<<endl;

    }
    
}

//multimap:
//in this a key can be assigned with new value and that value wil also be stored
//means in this key do not have a unique value.
// syntax :    multimap<dt1,dt2> var;