#include<bits/stdc++.h>
using namespace std;

void breakdown(string s){
    // cout<<"The string is: "<<s;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(!islower(s[i])){
            cout<<s[i];
        }
        else{
            cout<<endl<<s[i];
        }
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    breakdown(s);
}