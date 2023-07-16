#include <iostream>
using namespace std;

int main() {
    int t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(s<=n)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<n - (s-n)<<endl;
        }
    }
	return 0;
}
