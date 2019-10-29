#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,a[1000],p,x=0,q;
    cin>>n>>m;
    x=n;
    q=m;
    for(i=1;i<=100;i++)
    {
        a[i-1]=i*q;
        //cout<<a[i-1]<<" ";
    }

    for(p=1;p<=100;p++)
    {
        if(m*p<=n)
            x++;
    }
    for(i=0;i<=100;i++)
    {
        if(a[i]==x)
            x=x+1;
    }cout<<x;

}
