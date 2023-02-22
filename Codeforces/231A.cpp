#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int p,v,t;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>p>>v>>t;

        if (p+v+t>=2)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
    
    return 0;
}
