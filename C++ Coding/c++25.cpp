#include<bits/stdc++.h>
using  namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if((int)a-(a/1)!=0||(int)b-(b/1)!=0||(int)c-(c/1)!=0)
    {
        cout<<"double";
        return 0;
    }
    else if(a*b/c<10e7&&c!=0)
    {
        cout<<"int";
    }
    else if(a*b/c>10e7&&c!=0)
    {
        cout<<"long long";
    }
    return 0;


}