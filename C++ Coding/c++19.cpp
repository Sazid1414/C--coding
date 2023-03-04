#include<bits/stdc++.h>
using namespace std;
int main()
{
    //jump statement
    /* break continue */
    //continue  that will take control to the starting of nearest for loop 
    for(int i=0;i<10;i++)
    {
        if(i==8)
        {
            continue;//when i will be 8 then the control will go to the 8th line so 8 wont be printed 
        }
        cout<<i<<endl;
    }
    return 0;
}