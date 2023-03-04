#include<bits/stdc++.h>
using namespace std;
int main()
{   int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(c>=a&&c<=b)
    {
        if(d>=b)
        {
            cout<<c<<" "<<b;
        }
        else if(b>=d)
        {
            cout<<c<<" "<<d;
        }
    }
    else if(a>=c&&a<=d)
    {
        if(b>=d)
        {
            cout<<a<<" "<<d;
        }
        else if(d>=b)
        {
            cout<<a<<" "<<b;
        }
    }
    
    else
    {
        cout<<"-1";

    }
}