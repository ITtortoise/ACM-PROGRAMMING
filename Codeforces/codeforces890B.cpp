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

ll n,m,k,i,j,t=-1,s,s2,c,x,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.pb(c);
    }
    v2=v1;
    sort(v1.begin(),v1.end());
    x=v1[n-1];
    for(i=0; i<n; i++)
    {
        if(v2[i]==x)
        {
            t=v2[i+1];
            k=i+2;
        }
    }
    for(i=0; i<n; i++)
    {
        if(t==v2[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<k<<endl;


    return 0;
}

