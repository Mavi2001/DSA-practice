#include<bits/stdc++.h>
using namespace std;
//Basic method of printng elements of a vector.
// int printvec(vector<int>&v)
// {
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
// }
//v.begin() function is used to return the beginning position of the container.
//v.end() function is used to return the after end position of the container.
int main()
{
    vector<int>v = {9,8,7,4,5,6,3,2,1};
    vector<int>::iterator ptr;
    for(ptr = v.begin();ptr<v.end();ptr++) 
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator ptr2;
    for(ptr2 = vp.begin();ptr2<vp.end();ptr2++)
    {
        // cout<<(*ptr2).first<<" "<<(*ptr2).second<<endl;  // or cout<<ptr2->first<<" "<<ptr2->second<<endl;
        cout<<ptr2->first<<" "<<ptr2->second<<endl;
    }
    
}