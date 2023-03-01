#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int banana_cost;
    int number_of_dollers;
    int needs_banana;
    int total_cost=0;

    cin>>banana_cost>>number_of_dollers>>needs_banana;
    for (int i = 1; i <= needs_banana; i++)
    {
        total_cost=total_cost+ (i*banana_cost);
    }

    if(total_cost<number_of_dollers){
        cout<<0<<endl;
    }

    else{  
        cout<<total_cost-number_of_dollers<<endl;  
    }
    return 0;
}


