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

ll n,m,k,i,j,t,c,x,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>k>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        c=a[i]%m;
        _map[c]++;
    }
    for(auto i:_map)
        v.pb(mp(i.s,i.f));
    sort(all(v));
    r=v.size();
    if(v[r-1].f<k)
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    for(i=0; i<n&&k; i++)
        if(a[i]%m==v[r-1].s)
        {
            cout<<a[i]<<" ";
            k--;
        }


    return 0;
}
