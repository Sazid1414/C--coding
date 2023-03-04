#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool check=0;
    int x;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            check=1;
        }
    }
    if(check==1)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
    }
    return 0;
}