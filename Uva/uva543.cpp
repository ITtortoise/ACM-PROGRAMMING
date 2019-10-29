#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999999
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k=0,m;
    a[0]=1;
    a[1]=1;
    for(i=2; i<=100000000; i++)
        if(a[i]==0)
        {
            //cout<<i<<" ";
            for(j=2; i*j<=100000000; j++)
                a[i*j]=1;
        }
    while(cin>>m)
    {
        if(m==0)
            break;
        for(i=2; i<=m/2; i++)
            if(a[i]==0)
                if(a[m-i]==0)
                {
                    cout<<m<<" = "<<i<<" + "<<m-i<<endl;
                    break;
                }
    }
    return 0;

}





