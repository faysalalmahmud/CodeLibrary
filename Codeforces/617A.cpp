#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int distance,steps=0;
    cin >> distance;

    int arr[]={5,4,3,2,1} ;
    for (int i = 0; i < 5; i++)
    {
        steps=steps+(distance/arr[i]);
        distance=distance%arr[i];
    }
    cout<<steps<<endl;
    
    return 0;
}


