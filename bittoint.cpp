#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> pairs;
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        int p = arr[i];
        while(arr[i] > 0)
        {
            int k = arr[i] & 1;
            if(k==1)
            {
                count++;
                arr[i] = arr[i]>>1; 
            }
            else{
                arr[i] = arr[i]>>1;
            }
        }
        pairs.push_back(make_pair(p,count));
        count = 0;
    }
    
    for(int i=0;i<pairs.size();i++)
    {
        for(int j=i+1;j<pairs.size();j++)
        {
            if(pairs[i].second>pairs[j].second)
            {
                swap(pairs[i],pairs[j]);
            }
        }
    }

    for(int i=0;i<pairs.size();i++)
    {
      cout<<"("<<pairs[i].first<<","<<pairs[i].second<<")"<<endl;
    }

    int newcount = 1,max = 0;
    for(int i=0;i<pairs.size();i++)
    {
        int q = i;
        for(int j=i+1;j<pairs.size();j++)
        {
            if(pairs[i].first < pairs[j].first){
                newcount++;
                i = j;
            }
            else{
                break;
            }
        }
        i = q;
        if(max<newcount){
            max = newcount;
        }
        newcount = 1;
    }
    cout<<max;
}