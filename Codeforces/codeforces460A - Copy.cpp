#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j=0,k=0,a[1000],p,x=0,q,b[100],c[100],d[100],e[100];
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


    for(i=1;i<100;i++)
    {   b[j]=n;
        c[k]=x;
       if(a[i]>b[j]&&a[i]<=c[k])
       {x=x+1;}

    }cout<<x;
}
