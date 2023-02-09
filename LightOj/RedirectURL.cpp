#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cout<<"Case "<<i+1<<": ";
        string str;
        cin>>str;
        if (str[4]!='s')
        {
            for (int j = 0; j <4; j++)
            {
                cout<<str[j];
            }
            cout<<'s';

            for (int k =4 ; k < str.size(); k++)
            {
                cout<<str[k];
            }                   
        }

        else{
            cout<<str;
        }
        cout<<endl;
    }

    return 0;
}
