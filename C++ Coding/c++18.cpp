#include<bits/stdc++.h>
using namespace std;
int main()
{
    //jump statement
    /* break continue */
    //break that will escape the nearest for loop 
    for(int i=0;i<10;i++)
    {
        if(i==8)
        {
            break;//when i will be 8 then the control will go to the 14th line
        }
        cout<<i<<endl;
    }
}