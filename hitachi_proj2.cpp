#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, vector<string>> m;
    ofstream fout;
    string str, elem;
    fout.open("mavi.txt");
    while (fout)
    {
        cin >> str;
        if (str == "exit")
            break;

        fout << str << " ";
        for (int i = 0; i < 4; i++)
        {
            cin >> elem;
            m[{str}].push_back(elem);
            fout << elem << " ";
        }
        fout << endl;
    }
    fout.close();
    ofstream fout2;
    fout2.open("mavi2.txt");

    map<string, vector<string>> m2;
    cout << "Enter the no. of queries:\n";
    int n;
    cin >> n;
    cout << "Enter the query string:\n";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        fout2 << s << " ";
        auto it = m.find(s);
        // auto &fs = (*it).first;
        auto &ss = (*it).second;

        if (it == m.end())
            cout << "NO value";
        else
        {
            for (auto &elem : ss)
            {
                cout << elem << " ";
                fout2 << elem << " ";
                // m2[{s}].push_back(elem);
            }
        }
        fout2 << endl;
    }
    fout2.close();
    cout << endl
         << "check mavi2.txt\n";
}