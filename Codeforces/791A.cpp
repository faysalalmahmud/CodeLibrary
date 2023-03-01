#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,needs_year=0;
    cin>>a>>b;

    while (a <= b)
    {
        needs_year=needs_year+1;

        a=a*3;
        b=b*2;

        if (a>b)
        {
            cout<<needs_year<<endl;
            break; 
        }
        
    }
    
    return 0;
}


