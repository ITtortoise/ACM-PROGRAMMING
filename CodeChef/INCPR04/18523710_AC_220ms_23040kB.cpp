#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,a[1000000],test,cnt;
int main()
{
    scanf("%lld",&test);
    while(test--)
    {

        memset(a,0,sizeof(a));
        scanf("%lld%lld",&n,&m);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=1; i<=n; i++)
        {
            if(a[m]>a[i])
                cnt++;
        }
        printf("%lld\n",cnt+1);
        cnt=0;
    }

}
