#include<bits/stdc++.h>
using namespace std;

char maxocc(string s){
    int nums[26] = {0};
    for(int i=0;i<s.length();i++)
    {
        int num = 0;
        num = s[i] - 'a';
        nums[num]++;
    }
    int maxi = -1, ans = 0;
    for(int i=0 ; i<26 ;i++)
    {
        if(maxi<nums[i]){
            ans = i;
            maxi = nums[i];
        }
    }
    char finalans = ans + 'a';
    return finalans;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The most repeated char is: "<<maxocc(s)<<endl;
}