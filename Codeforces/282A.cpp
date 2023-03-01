#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int t;
    cin >>t;
    int sum=0;
    string str;

    for (int i = 0; i < t; i++)
    {
        cin>>str;

        if(str=="++X" || str=="X++"){
            sum++;
        }

        else{
            sum--;
        }
        
    }
    
    cout<<sum<<endl;
    return 0;
}


