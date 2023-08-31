#include<bits/stdc++.h>
using namespace std;

int spiral(int matrix[][3], int row, int col)
{
    vector<int> ans;
    //indexes
    int sr = 0;
    int er = row-1;
    int sc = 0;
    int ec = col-1;

    int total = row*col;

    int count = 0;

    while(count<total)
    {
        //starting row
        for(int index = sc; count<total && index<=ec; index++)
        {
            ans.push_back(matrix[sr][index]);
            count++;
        }
        sr++;

        //ending column
        for(int index = sr; count<total && index<=er; index++)
        {
            ans.push_back(matrix[index][ec]);
            count++;
        }
        ec--;

        //ending row
        for(int index = ec; count<total && index>=sc; index--)
        {
            ans.push_back(matrix[er][index]);
            count++;
        }
        er--;

        //starting column
        for(int index = er; count<total && index>=sr; index--)
        {
            ans.push_back(matrix[index][sc]);
            count++;
        }
        sc++;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    int matrix[3][3];
    cout<<"Enter the matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>matrix[i][j];
        }
    }
    spiral(matrix,3,3);
}