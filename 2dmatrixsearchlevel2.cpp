#include<bits/stdc++.h>
using namespace std;
int search(int matrix[][3], int row, int col, int target)
{
    int ri = 0;
    int ci = col - 1;
    while(ri<row && ci >= 0)
    {
        int element = matrix[ri][ci];
        if(target == element){
            return 1;
        }
        else if(element>target)
        {
            ci--;
        }
        else{
            ri--;
        }
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