#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a=10000000;
    double b=10000000000;
    double c=a*b;
    cout<<fixed<<setprecision(0)<<c<<endl;//what is the reason of giving fixed in this code
    //why we not use double always because its range is big
    //the use of setprecision 
    //the less accurateness of double
    //we should avoid double and float in cp
    return 0;
}