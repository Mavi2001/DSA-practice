#include<bits/stdc++.h>
using namespace std;
int search(int matrix[][3], int row, int col, int target)
{
    int start = 0;
    int end = row*col - 1;
    int mid = start + (end - start)/2;
    int count = 0;
    while(start<=end)
    {
        int element = matrix[mid/col][mid%col];

        if(target == element)
        {
            return 1;
        }
        else if(element < target)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}
int main()
{
    int matrix[3][3];
    cout<<"Enter the matrix: ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int ans = search(matrix,3,3,target);
    if(ans!=0){
        cout<<"Element is present."<<endl;
    }
    else{
        cout<<"Element is absent."<<endl;
    }
}