#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[][3], int row, int col){
    int sum = 0,maxsum = 0,r;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            sum += arr[i][j];
        }
        if(maxsum<sum){
            maxsum = sum;
            r = i;
        }
        sum = 0;
    }
    cout<<"Maximum sum is: "<<maxsum<<" at row "<<r + 1;
}

int main()
{
    cout<<"Enter the elements of the matrix: ";
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    maxsum(arr,3,3);
}