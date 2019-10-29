#include<bits/stdc++.h>
#define sf scanf
#define pf printf
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,d,mini,c=0;
    sf("%lld",&n);
    LL a[n+1];
    for(i=0; i<n; i++)
        sf("%lld",&a[i]);
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        d=fabs(a[i]-a[i+1]);
        if(i==0)
          mini=d;
        if(mini>d||mini<d)
        {
            mini=d;
            c=1;
        }
        else if(d==mini)
        {
            mini=d;
            c++;
        }
    }
    pf("%lld %lld\n",mini,c);

    return 0;}
