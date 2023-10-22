/*Example 1:
Price = [ 1, 6, 2 ]
Ratan buys it on the first day and sells it on the second. 
Example 2:
Price = [ 9, 8, 6 ] 
The Price always went down, Ratan never bought it.

Sample Input: 7, [ 1, 9, 2, 11, 1, 9, 2 ]
Sample Output:  10
Explanation: The maximum profit possible is when Ratan buys it in 1 rupee and sells it in 11.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    int max = INT_MIN;
    int k;
    for(int i=0;i<n;i++)
    {
        if(price[i]>max){
            max = price[i];
            k = i;
        }
    }
    int min = INT_MAX;
    int l;
    for(int i=0;i<=k;i++)
    {
        if(price[i]<min){
            min = price[i];
            l = i;
        }
    }
    cout<<price[k] - price[l];
}