#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    int n;
    long long int fact=1;
    for(int test=0;test<t;test++)
    {
        cin>>n;
       
            for(int i=1;i<=n;i++)
            {
                
                fact=fact*i;
            }
        cout<<fact<<endl;
        fact=1;
    }
    return 0;

}