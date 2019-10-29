/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
using namespace std;

ll n,m,k=INT_MAX,i,j,t,t1,t2,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a,b,mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>a>>b;
    mx=max(a,b);
    mn=min(a,b);
    for(i=1;i<n;i++)
    {
        t1=mx/(n-i);
        t2=mn/i;
        t=abs(t1-t2);
        v.pb(mp(t,t2));

        k=t;

    }
    sort(v.begin(),v.end());
    cout<<v[0].s;

    return 0;
}

