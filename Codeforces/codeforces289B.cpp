/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1,t2,t3,t4,t5,r,l,c,d,sum=0,cnt=0,x,y,g,z,rem,mod,mx,mn=INT_MAX,a[100][100];
ll s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>m>>d;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            //cin>>a[i][j];
            t=a[0][0];
            if(abs(t-a[i][j])%d!=0)
            {
                cout<<-1;
                return 0;
            }
            v1.pb(a[i][j]);
        }
    }
    sort(all(v1));
    for(i=0; i<v1.size(); i++)
    {
        cnt=0;
        for(j=0; j<v1.size(); j++)
            cnt+=(abs(v1[j]-v1[i])/d);
        mn=min(mn,cnt);
    }
    cout<<mn;

    return 0;
}


