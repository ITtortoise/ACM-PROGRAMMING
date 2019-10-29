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

ll n,m,k,i,j,t,s=0,s2=0,c1=0,c2,x,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c1;
        s=s+c1;
    }
    for(i=0; i<n; i++)
    {
        cin>>c2;
        v1.pb(c2);
    }
    sort(v1.begin(),v1.end());
    s2=v1[n-1]+v1[n-2];
    if(s2>=s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}

