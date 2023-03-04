#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;  
    if(n<10&&n>100)
    {
        return 0;
    }
    
    if((n/10)%(n%10)==0||(n%10)%(n/10)==0)
    {
        cout<<"YES";
    }
    else

    {
        cout<<"NO";
    }
    return 0;
        

        
    
}