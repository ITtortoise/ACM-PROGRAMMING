#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long LL;
int main()
{
        LL n,i,j,k,l,m=2;
        sf("%lld",&n);
        LL a[n*n];
        for(i=1; i<=n*n; i++)
            a[i]=i;
        for(j=1,k=n*n; j<=(n*n)/2; j++,k--)
        {
            cout<<a[j]<<" ";
            cout<<a[k]<<" ";

            if(m%n==0)
                cout<<endl;
            m=m+2;
        }



}
