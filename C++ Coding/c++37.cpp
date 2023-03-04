#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
   
    for(int i=2;i<=a;i++)
    {    bool check=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check=1;
            }

        }
        if(check==0)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
    
    
    }
