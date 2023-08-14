/*Given an array of integers, output the pairs of integers whose sum gives the required output nd print the
pairs in non decrasing order*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairsum(int arr[], int n, int m)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == m)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    cout << "Enter the size of the array :";
    int n, m;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum of pair :";
    cin >> m;
    vector<vector<int>> k = pairsum(arr, n, m);
    for (vector<vector<int>>::iterator i = k.begin(); i != k.end(); i++)
    {
        for (vector<int>::iterator j = i->begin(); j != i->end(); j++)
        {
            std::cout << *j;
        }
    }
}