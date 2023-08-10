#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string>ip;
    ofstream fout;
    fout.open("om1.txt");
    while(fout)
    {
        string a,b;
        cin>>a>>b;
        if(a=="e" && b=="e")
        break;

        ip.insert({a,b});
        fout<<a<<" "<<b<<endl;
    }
    fout.close();
    unordered_map<string,string>ip2;
    cout<<"Enter the no. of queries:\n";
    int n;
    cin>>n;
    cout<<"Enter the query string:\n";
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        auto it  = ip.find(s);
        if(it == ip.end())
        cout<<"NO value";
        else
        cout<<(*it).second;
        ip2.insert({s,(*it).second});
    }
    cout<<endl<<"check om2.txt\n";
    ofstream fout2;
    fout2.open("om2.txt");
    for(auto str2 : ip2)
    {
        fout2<<str2.first<<" "<<str2.second<<endl;
    }
    fout2.close();
}
