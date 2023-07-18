#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[5]="dj";
    m[6]="kh";
    m[2]="kj";
    m[9]="nhv";
    auto it = m.find(2);  //m.find() also has O(log(n)) complexity and it returns the iterator.
    //auto it = m.find(8); //if the key value is not available then iterator points to the m.end().
    // if(it==m.end())
    // {
    //     cout<<"NO value"<<endl;
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;  // or cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    m.erase(it); // it can take key or iterator as the input..
    for(auto mp : m)
    {
        cout<<mp.first<<" "<<mp.second<<endl;
    }
    m.clear();
    for(auto mp : m)
    {
        cout<<mp.first<<" "<<mp.second<<endl;
    }
    
}