/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100000
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum=0,cnt,a[sz],b,d,rem,mod,mx,mn,v,r,l,kv;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        _mp[a[i]]=0;
    }
    sort(a,a+n);
    ll temp=a[0];
    for(it=_mp.begin();it!=_mp.end();it++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            t=a[j]-(it->ff);
            sum+=t;

            if(sum<=k&&j==0)
                cout

            //sum
        }

    }


}

