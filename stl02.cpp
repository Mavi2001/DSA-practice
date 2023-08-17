#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(7);
    maxi.push(5);
    maxi.push(3);    
    int n = maxi.size();
    for(int i=0 ; i<n ; i++)
    {
        cout<<maxi.top()<<" "<<endl; //returns the greatest element of the heap.
        maxi.pop();      //now that greatest element is popped.
        cout<<"size is: "<<maxi.size()<<endl;
    }


    mini.push(12);
    mini.push(71);
    mini.push(51);
    mini.push(35);    
    n = mini.size();
    for(int i=0 ; i<n ; i++)
    {
        cout<<mini.top()<<" "<<endl; //returns the smallest element of the heap.
        mini.pop();      //now that smallest element is popped.
        cout<<"size is: "<<mini.size()<<endl;
    }

}