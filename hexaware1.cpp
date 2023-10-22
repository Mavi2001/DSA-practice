/*Sample input 0:
5   → ( number of strings )
Hello Good morning Welcome you
Sample output 0: morning
Explanation: First word that is picked by the computer is morning 
Hello → 5
Good → 4
Morning → 7
Welcome → 7 
You → 3*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    string result = "";
    while(n--)
    {
        cin>>s;
        if(s.length() & 1)
        {
            if(s.length()>result.length())
            {
                result = s;
            }
        }
    }
    if(result == "")
    {
        cout<<"Better luc next time";
    }
    else{
        cout<<result;
    }
}