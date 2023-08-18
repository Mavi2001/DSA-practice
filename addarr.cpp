#include<bits/stdc++.h>
using namespace std;

int addarr(int arr1[], int arr2[], int m, int n)
{
    stack<int>s;
    int carry = 0, digit = 0;
    int i = m-1, j = n-1;
    while(i>=0 && j>=0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        digit = sum%10;
        s.push(digit);
        i--;
        j--;
    }
    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        digit = sum%10;
        s.push(digit);
        i--;
    }
    while(j>=0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        digit = sum%10;
        s.push(digit);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        digit = sum%10;
        s.push(digit);
    }
    while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    }
}

int main()
{
    int m,n;
    cout<<"Enter the size of first array: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements of the first array: ";
    for(int i=0 ; i<m ; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements of the second array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr2[i];
    }
    addarr(arr1,arr2,m,n);
}