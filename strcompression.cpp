#include<bits/stdc++.h>
using namespace std;

void compress(string s){
    int n = s.length();
    int i=0;
    int index = 0;
    while(i<n){
        int j = i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        //agar j n se bda hogya ho ya element j index par nya milgya ho
        s[index] = s[i];
        index++;

        int count = j-i;
        if(count>1)
        {
            string cnt = to_string(count);
            for(char ch: cnt){
                s[index] = ch;
                index++;
            }
        }
        i=j;
    }
    cout<<"New size is: "<<index<<endl;
    for(int i=0;i<index;i++)
    {
        cout<<s[i];
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    compress(s);
}