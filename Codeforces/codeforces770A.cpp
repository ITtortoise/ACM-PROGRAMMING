#include<bits/stdc++.h>
#define sf scanf
#define pf printf
typedef long long LL;
using namespace std;

int main()
{
    LL n,d,i,j,k,s;
    sf("%lld %lld",&n,&d);
    s=97;
    for(i=1; i<=n; i++)
    {
        pf("%c",s);
        if(i%d==0)
            s=97;
        else
            s++;
    }
    cout<<endl;
    return 0;
}
