#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s=0,mini=0,d,k=0,r2=0,r1=0,t=0;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    {cin>>a[i];
    s=s+a[i];}
    mini=((n-1)*10)+s;
    if(mini>d)
    {cout<<"-1";}
    else if(mini<=d)
    {
        r1=((n-1)*10)/5;
        //cout<<r1;
        t=d-mini;
         r2=t/5;
         if(t>0)
            cout<<r1+r2;
         else
            cout<<r1;
    }

}

