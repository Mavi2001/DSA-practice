//elements are stored in sorted order in sets and multisets.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the no. of test cases:\n";
    int t;
    cin>>t;
    while(t--)
    {
        int N,k;
        cout<<"Enter no. of bags and time in minutes:\n";
        cin>>N>>k;
        multiset<long long>bags;
        cout<<"Enter candies in each bag:\n";
        for(int i=0;i<N;i++)
        {
            int c;
            cin>>c;
            bags.insert(c);
        }
        long long t_c = 0;  //initializing total candies with 0.
        for(int i = 0; i < k; i++)
        {
            auto last_it = --bags.end();  //access the maximum candy which is present at the last iterator
            //last iterator is the one just before bags.end()
            int max_candy = *last_it; //access the value of last iterator.
            t_c += max_candy; //udating the value of total candies.
            bags.erase(last_it);
            bags.insert(max_candy / 2);
        }
        cout<<"Total candies consumed are: "<<t_c<<endl;
    }
}