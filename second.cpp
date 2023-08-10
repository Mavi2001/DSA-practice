#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    ofstream fout;
    fout.open("om.txt",ios::app);
    while(fout)
    {
        cin>>a>>b;
        if(a=="e" && b=="e")
        {
            break;
        }
        fout<<a<<" "<<b;
    }
    fout.close();
    
}