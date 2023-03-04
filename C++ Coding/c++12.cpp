#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2;
    int b=3;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<=b)<<endl;
    //&& ||
    int c=4;
    cout<<((a<b)&&(b>c))<<endl;//AND operator
    cout<<((a<b)||(b>c))<<endl;//OR operator
    return 0;
}