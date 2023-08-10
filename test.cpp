#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaration of maps
    map<int, string> m;
    int a;
    string s;
    cin>>a>>s;
    m.insert({a,s});
    m[5] = "sf";  //O(log(n)) to insert and log(n) to access
    m[2] = "kj";
    m[7] = "xc";
    m.insert({4,"ikjk"});
    cout<<m[a];
}

