#include<bits/stdc++.h>
#include<algorithm>
#define pf printf
#define sc scanf
#define ll long long

using namespace std;
int main()
{
    ll n,s=0;
    double av=0;
    sc("%lld",&n);
    ll a[n];
    for(int i=0;i<n;i++)
        {sc("%lld",&a[i]);
        s=s+a[i];}
    av=s/n;
   pf("%lld %f",s,av);


}
