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

ll n,m,k,i,j,t,c,x=0,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>c;
        v1.pb(c);
    }
    sort(v1.begin(),v1.end());
    for(j=0;j<m;j++)
        if(v1[j]<0)
         x=x+v1[j];
    cout<<abs(x)<<endl;
    return 0;
}
