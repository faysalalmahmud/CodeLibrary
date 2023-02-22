#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int w,count=0;
    cin>>w;
    for (int i = 2; i <= (w/2); i+=2)
    {
        int ev=w-i;
        if(ev%2==0){
            count=1;
        }
    }
    
    
    if (count==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}
