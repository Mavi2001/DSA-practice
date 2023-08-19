#include<bits/stdc++.h>
using namespace std;

void removess(string s, string ss){
    while(s.length() != 0 && s.find(ss)<s.length()){  /*s.length() != 0 : if we enter empty string then it avoids it*/
        s.erase(s.find(ss),ss.length());
    }
    cout<<s;
}

int main()
{
    string s,ss;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Enter the substring: ";
    cin>>ss;
    removess(s,ss);
}