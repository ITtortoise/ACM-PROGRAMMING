#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    {
        if(d>0&&d<=5)
            cout<<"5";
        else
            cout<<"6";
    }
    else  if(n==4||n==6||n==9||n==10||n==11)
    {
        if(d>0&&d<=6)
            cout<<"5";
        else
            cout<<"6";
    }
    else if(n==2)
    {
        if(d>1&&d<=7)
            cout<<"5";
        else if(d>0&&d<2)
            cout<<"4";
    }

}
