#include<bits/stdc++.h>
using namespace std;
int main()
{
    //overflow
    //-10^9<int<10^9
    //-10^12<long int<10^12
    //-10^18<long long int<10^18 
    int a=100000;
    int b=1000000;
    int c=a*b;//overflow run the code to understand
    cout<<c<<endl;
    int mx=INT_MAX;
    cout<<mx<<endl;
    cout<<mx+1<<endl;//run the code to understand
    return 0;
    /*int a=1000000;
    int b=10000000;
    long long int c;
    c=a*b;
    cout<<c<<endl;

    */
    /*
    int a=1000000;
    int b=10000000;
    long long int c;
    c=a*b*1LL;//understand the LL 
    cout<<c<<endl;
    
    */

}