#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,a[10000],j=0,i,b=0;
    cin>>n>>d;
    if(n%2==0)
    {
        for(i=n; i>=n/2; i--)
        {
            a[j]=i;
            if(a[j]%d==0)
                b=a[j];
            //cout<<a[j]<<" ";
            j++;
        }
        if(b==0)
            cout<<"-1";
        else
            cout<<b;
    }
    else
    {
        for(i=n; i>n/2; i--)
        {
            a[j]=i;
            if(a[j]%d==0)
                b=a[j];
            //cout<<a[j]<<" ";
            j++;
        }
        if(b==0)
            cout<<"-1";
        else
            cout<<b;
    }
}
