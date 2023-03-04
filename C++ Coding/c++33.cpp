#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result=0,rem,x;
    cin>>n;
    x=n;
    while(x)
    {
        rem=x%10;
        result=result*10+rem;
        x=x/10;
    }
    if(n==result)
    {
        cout<<n<<endl<<"YES";
    }
    else
    {
        cout<<result<<endl<<"NO";

    }
    return 0;
    
}