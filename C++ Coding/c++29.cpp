#include<bits/stdc++.h>
using namespace std;
int main()
{   
     long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    long long mul=a*b*c*d;
    int x=mul%100;
    if(x<10)
    {
        cout<<'0'<<x;
    }    
    else 
    {
        cout<<x;
    }
    return 0;
}