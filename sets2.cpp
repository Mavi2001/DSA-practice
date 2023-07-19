//ordered sets are based on the red black tree
//unorered sets are based on hash tables
//all the time complexities become O(1) in unordered sets.

//print some queries and check the string is present or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>str;
    int n;
    cout<<"Enter the no. of strings:\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        str.insert(s);
    }
    cout<<"Enter the no. of queries:\n";
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(str.find(s)==str.end())
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
} //multiset is similar to the multimap, all time complexities are again O(log(n)).
//in case there are multiple values, then .find() method return the iterator of the first value
//and it that itearator is passed to .erase() then only one value of the duplicates is deleted to which 
//the iterator was pointing.
//but if we directly pass the value to .erase() it will delete all the duplicates values of the input. 
