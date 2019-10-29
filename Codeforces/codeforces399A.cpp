#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,i,j;
    cin>>n>>p>>k;
    if(p>k && p-k!=1)
    {
        cout<<"<<"<<" ";
        for(i=p-k;i<=p;i++)
        {
            if(i==p)
                cout<<"("<<i<<")"<<" ";
            else
                cout<<i<<" ";
        }
    }
     if(p<=k || p-k==1)
    {
        for(i=1;i<=p;i++)
        {
            if(i==p)
                cout<<"("<<i<<")"<<" ";
            else
                cout<<i<<" ";
        }
    }
    if(n>p+k)
    {
        for(j=p+1;j<=p+k;j++)
        {
            cout<<j<<" ";

        }
        cout<<">>";
    }
    if(n<=p+k)
    {
        for(j=p+1;j<=n;j++)
        {
            cout<<j<<" ";

        }
    }

}
