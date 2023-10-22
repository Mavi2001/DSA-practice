/*Rohit loves to play with sequences so he has given you a sequence to solve. 
To prove to him that you are a good coder, you accept the challenge. 
Find the sum of the sequence. Given three integers i, j, k. 
Find  i + (i+1) + (i+2) + (i+3) … j + (j-1) + (j-2) + (j-3) …….. k

Example:
i=5
j=9
k=6
 Sum of all values from i to j and back to k:  5 + 6 + 7 + 8 + 9 + 8 + 7 + 6 = 56*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    int s = 0;
    while(i!=j)
    {
        s = s + i;
        i++;
    }
    while(j!=k)
    {
        s = s + j;
        j--;
    }
    cout<<s + k;
}
