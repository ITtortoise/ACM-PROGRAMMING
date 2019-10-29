#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 12345
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,k;
    sf("%lld",&n);
    if(n%2!=0)
    {
        pf("-1\n");
        return 0;
    }
    for(i=1; i<=n; i+=2)
    {
        pf("%lld %lld",i+1,i);
        if(i+2<n)
         pf(" ");
    }
    return 0;
}
