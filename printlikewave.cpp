#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[][3], int row, int col){
    for(int i = 0 ;i < col; i++)
    {
        if(i%2==0){
            for(int j = 0; j<row; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = row-1 ; j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
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