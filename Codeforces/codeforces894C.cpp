#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,s,s2,c,x,y,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int gcd(int x,int y)
{
    int rem;

    rem=y%x;
    y=x;
    if(rem==0)
        return x;
    x=rem;





}
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        v1.pb(a[i]);
    }
    for(j=1; j<n-1; j++)
    {
        x=gcd(a[j],a[i]);
        cout<<x<<" ";



    }

    return 0;
}

