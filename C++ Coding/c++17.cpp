#include<bits/stdc++.h>
using namespace std;
int main()
{
    //best practice for t test cases
    int t;
    cin>>t;
    int n;
    cin>>n;
   
     while(t--)
     {
           for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     }

    
    return 0;
}