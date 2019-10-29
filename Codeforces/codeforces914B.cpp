/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j=0,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],a1[sz],g,z,rem,mod,mx=-1,mn;
double d,t;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
            v2.pb(a[i]);
        else if(a[i]>0)
        {
            d=sqrt(a[i]);
            t1=sqrt(a[i]);
            if(d-t1>0)
                v2.pb(a[i]);
        }
    }
    sort(all(v2));
    cout<<v2[v2.size()-1];


    return 0;
}
