#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[3] = {3,4,7};

    for(int i=0;i<7;i++ )
    {
        int element = arr1[i];
        {
            for(int j=0;j<3;j++)
            {
                if(element == arr2[j])
                {
                    arr2[j] = -1;
                    cout<<element<<endl;
                }
            }
        }
    }
}