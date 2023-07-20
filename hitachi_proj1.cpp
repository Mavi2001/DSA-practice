#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, string>ip;
    ofstream fout;
    fout.open("om2.txt");
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
    // for(auto str : ip)
    // {
    //     cout<<str.first<<" "<<str.second<<endl;
    // }
    multimap<string,string>ip2;
    cout<<"Enter the no. of queries:\n";
    int n;
    cin>>n;
    cout<<"Enter the query string:\n";
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        // ip2.insert({s,ip[s]});
        auto it  = ip.find(s);
        if(it == ip.end())
        cout<<"NO value";
        else
        cout<<(*it).second;
        ip2.insert({s,(*it).second});
    }
    cout<<"check om3.txt\n";
    ofstream fout2;
    fout2.open("om3.txt");
    for(auto str2 : ip2)
    {
        fout2<<str2.first<<" "<<str2.second<<endl;
    }
    fout2.close();
}
