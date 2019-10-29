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

ll n,m,k,i,j,t,c,x,r,res,mod,a[sz],MX,sum=0;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        v1.pb(c);
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+abs(v1[i]-v1[i+1]);
    }
    cout<<sum+v1[0]+(n*2)-1;
    return 0;
}
