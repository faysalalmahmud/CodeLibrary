#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int num;
        cin>>num;

        int last_digit=num%10;
        int first_digit=num/10000;
        int sum=last_digit+first_digit;
        cout<<"Sum = "<<sum<<endl;
    }
        
    return 0;
}


