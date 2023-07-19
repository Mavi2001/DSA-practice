#include<bits/stdc++.h>
using namespace std;
void printset(set<string>&s)
{
    for(auto &value : s)
    {
        cout<<value<<" ";
    }
    //or
    // for(auto value = s.begin();value != s.end();value++)
    // {
    //     cout<<(*value)<<" ";
    // }
}
int main()
{
    set<string>s;  //ordered set print the strings in lexical order and stores unique values.
    s.insert("abc"); //time complexity of insertion is O(log(n)).
    s.insert("hfg");
    s.insert("xsc");
    s.insert("sdvj");
    auto itr = s.find("abc"); //s.find() return the iterator of the value.
    printset(s);
}