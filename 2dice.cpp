#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k;
    cout << "Enter the sum of two dices: ";
    cin >> k;
    if (k < 2 || k > 12)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= 5; j++)
            {
                if (arr[i] + arr[j] == k)
                {
                    cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                }
            }
        }
    }
}