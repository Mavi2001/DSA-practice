#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;  //ofstream class is to write on files.
    string line;

    fout.open("sample.txt", ios::app); //open a file
    while(fout) //loop till the file is opened successfully
    {
        getline(cin,line); //read a line from the standard input
        if(line=="0")   //press 0 to exit
        break;

        fout<<line<<endl; //write line in the file.
    }
    // fout.close();//closing the file.

    ifstream fin;//Creation of ifstream class object to read the file.
    fin.open("sample.txt");  
    while(getline(fin,line))//Execute loop until end of line.
    {
        
        for(int i=0;i<line.size();i++)
        {
            if(line[0]=='L')
            {
                cout<<line[i];
            }
            else
            break;
        }
        cout<<" ";
    }
    fin.close();
    return 0;
}