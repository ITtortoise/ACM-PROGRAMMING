#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,i,j,k,a1[10000],a2[10000],a3[10000],f=0,g=0,u=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
        {cin>>a1[i];}
    cin>>p;
    for(j=0;j<p;j++)
    {cin>>a2[j];}

    for(k=0;k<m+p;k++)
    {if(k<m)
        {a3[k]=a1[f];
            //cout<<a3[k]<<" ";
            f++;}
    else
    {a3[k]=a2[g];
    //cout<<a3[k]<<" ";
    g++;}
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m+p;j++)
        {
            if(a3[j]==i)
                {u++;
                 break;}
        }
    }
        if(u==n)
        cout<<"I become the guy.";
        else
        cout<<"Oh, my keyboard!";

}
