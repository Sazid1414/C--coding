#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int maximum=a[0];
    for(int i=0;i<size-1;i++)
    {
         maximum=max(maximum,a[i+1]);
    }
    cout<<maximum;
    return 0;
}