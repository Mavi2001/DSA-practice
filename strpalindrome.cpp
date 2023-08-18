/*Check palindrome:
Should not be case sensitive
Only alphanumeric characters to be considered
Remove any special characters and check for palindrome*/

#include<bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z') || (ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}

char tolowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string a){
    int s = 0, e = a.length() - 1;
    while(s<=e)
    {
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}



int ispalindrome(string s){
    string temp = "";
    for(int i=0;i<s.length();i++)
    {
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    for(int i=0;i<temp.length();i++)
    {
        temp[i] = tolowercase(temp[i]);
    }

    bool k = checkpalindrome(temp);
    return k;
}

int main() {

    string s;
    // Use getline to read a full sentence including spaces
    cout << "Enter a sentence: ";
    getline(cin, s);
    // cout<<s;

    bool k = ispalindrome(s);
    if(k==0){
        cout<<"Not a palindrome"<<endl;
    }
    else{
        cout<<"Is a palindrome"<<endl;
    }

    return 0;
}