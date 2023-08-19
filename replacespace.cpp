#include<bits/stdc++.h>
using namespace std;

void replace(string s)
{
    string k;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] != ' '){
            k.push_back(s[i]);
        }
        else{
            k.push_back('@');
            k.push_back('4');
            k.push_back('0');
        }
    }
    cout<<"Resultant string: "<<k;
}

int main()
{
    string s;
    cout<<"Input string: ";
    getline(cin,s);
    // cout<<s;
    replace(s);
}