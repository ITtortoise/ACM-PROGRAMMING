#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000000
typedef long long LL;
using namespace std;
LL n,i,amt[sz],a[sz],j=0;
int main()
{

    while(sf("%lld",&n)!=EOF)
    {
        amt[n]++;
        if(amt[n]==1)
        {
            a[j]=n;
            j++;
        }
    }
    for(i=0; i<j; i++)
        cout<<a[i]<<" "<<amt[a[i]]<<endl;

    return 0;


}
