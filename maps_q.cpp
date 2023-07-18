//take input string and print unique strings with their frequencies in lexical order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of strings\n";
    int N;
    cin>>N;
    map<string, int> m;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        cout<<m[s]<<endl;
    }
    for(auto str : m)
    {
        cout<<str.first<<" "<<str.second<<endl;
    }
}