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

ll n,m,k=-1,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{

    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v1.pb(t);
    }
    for(i=0; i<m; i++)
    {
        cin>>t1;
        v2.pb(t1);
    }
   mx = -1000000000000000005;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            t=v1[i]*v2[j];
            if(t>mx)
            {
                mx=t;
                k=i;
            }
        }
    }
    mx = -1000000000000000005;
    for(i=0; i<n; i++)
    {
        if(i==k)
            continue;
        for(j=0; j<m; j++)
        {
            t2=v1[i]*v2[j];
            if(t2>mx)
            {
                mx=t2;
            }


        }
    }
    cout<<mx;


    return 0;
}


