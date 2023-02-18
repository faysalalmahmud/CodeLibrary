#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<"Case "<<i+1<<": "<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    }
        
    return 0;
}


