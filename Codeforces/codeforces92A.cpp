#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s=0,i,j,k=0,v=0,s1=0,t=0,a[10000];
    cin>>n>>m;
    for(j=1;j<=ceill(m/n);j++)
    {
        for(i=1;i<=n;i++)
        {
            if(m>=s)
                s=s+i;
                if(s>m)
                {}
                else
                {a[t]=s;
                //cout<<a[t]<<" ";
                t++;}
        }


    }v=a[t-1];
    cout<<m-v;
    return 0;
}
