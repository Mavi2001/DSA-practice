#include <bits/stdc++.h>
using namespace std;

bool check(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

bool permutation(string s1, string s2)
{
    int arr1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        arr1[index]++;
    }
    int i = 0;
    int ws = s1.length();
    int arr2[26] = {0};
    while (i < ws && i < s2.length())
    {
        int index = s2[i] - 'a';
        arr2[index]++;
        i++;
    }
    if (check(arr1, arr2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        int index = s2[i] - 'a';
        arr2[index]++;

        index = s2[i - ws] - 'a';
        arr2[index]--;

        if (check(arr1, arr2))
        {
            return 1;
        }

        i++;
    }
    return 0;
}

int main()
{
    string s1, s2;
    cout << "Enter key string: ";
    cin >> s1;
    cout << "Enter source string: ";
    cin >> s2;
    bool k = permutation(s1, s2);
    if(k==1)
    {
        cout<<"Permutation exists";
    }
    else{
        cout<<"No permutation exixts";
    }
}