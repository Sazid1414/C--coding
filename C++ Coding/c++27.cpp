#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s,q;
    int a,b,c;
    cin>>a>>s>>b>>q>>c;
    if(s=='+'&&q=='='&&a+b==c)

    {
        cout<<"Yes"<<endl;
    }
    else if(s=='+'&&q=='='&&a+b!=c)
    {
        cout<<a+b;
    }
    if(s=='*'&&q=='='&&a*b==c)

    {
        cout<<"Yes"<<endl;
    }
    else if(s=='*'&&q=='='&&a*b!=c)
    {
        cout<<a*b;
    }
    if(s=='-'&&q=='='&&a-b==c)

    {
        cout<<"Yes"<<endl;
    }
    else if(s=='-'&&q=='='&&a-b!=c)
    {
        cout<<a-b;
    }
    return 0;
}