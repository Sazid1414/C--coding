#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    str1="Hello";//string in double quotes
    string str2;
    cin>>str2;//this can take input until it found a space or null character
    cout<<str1<<endl;
    cout<<str2<<endl;
    string concate;
    concate=str1+str2;
    cout<<concate<<endl;
    if(str1==str2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }
    //accessing string element 
    cout<<str1[0]<<endl;
    //str[0]='a' is correct but str[0]="a" is wrong
    //size of string 
    cout<<str1.size()<<endl;
    //To print every element of string
    for(int i=0;i<str1.size();i++)
    {
        cout<<str1[1]<<" ";
    }
    //getline fuction use 
    string str3,str4;
    getline(cin,str3);   
    getline(cin,str4);
    cout<<str2<<endl;
    cout<<str3<<endl;
   
    return 0;
}