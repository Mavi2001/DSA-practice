//Maps are based on red black tree data structure.
//Each element of map is a pair of a key and a value.
//Data in ordered maps is stored according to the keys. eg: (keys:1,5,2,4,3)->(1,2,3,4,5).
//Maps do not store data in contigious locations so we can't apply iterator+1 but can use iterator++.
//Key and value can be anything from some data type to even containers.
#include<bits/stdc++.h>
using namespace std;
int printmap(map<int,string>&m)
{
    cout<<"size of map is: \n";
    cout<<m.size()<<endl;
    // for(int i=0;i<m.size();i++)
    // {
    //     cout<<m[i]<<" "; //this will only print the "values" and not the "keys".
    // }
    // map<int,string>:: iterator it;
    // for(it = m.begin(); it!=m.end();it++) // we can't use it<m.end() in maps(don't know why).
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    for(auto &vk : m)    //refernce and not the copy.
    {
        cout<<vk.first<<" "<<vk.second<<endl;
    }
    cout<<endl;
}

int main()
{
    //declaration of maps
    map<int, string> m;
    m[5] = "sf";
    m[2] = "kj";
    m[7] = "xc";
    m.insert({4,"ikjk"});
    printmap(m);
}
