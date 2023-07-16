#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;
    p = {5,"abcde"}; // or p = make_pair(5,"abcd"); to enter values inti the pair.
    cout<<p.first<<" "<<p.second<<endl; //to print the values of the pair.

    pair<int,string>p1 = p; //makes copy of p in p1, changes made in any are independent of each other.
    p1.first = 6;
    cout<<p.first<<endl;
    cout<<p1.first<<endl;

    pair<int,string>&p2 = p; //p2 is made with reference of p, change in one reflects in another.
    p.second = "mavi";
    cout<<p.second<<endl;
    cout<<p2.second<<endl;

}