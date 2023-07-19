//insert n strings and print only the unique strings.
#include<bits/stdc++.h>
using namespace std;
void printstr(set<string>str)
{
    for(auto value:str)
    {
        cout<<value<<" ";
    }
}
int main()
{
    set<string>str;
    string s;
    int n;
    cout<<"Enter the no. of strings: \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        str.insert(s);
    }
    printstr(str);
}