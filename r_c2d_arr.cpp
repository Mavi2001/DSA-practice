#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter elements for array1: ";
    int arr1[3][4]; // row wise entry
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr1[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }

    cout<<"Enter elements for array2: ";
    int arr2[3][4]; // row wise entry
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++ )
        {
            cin >> arr1[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }
    
}