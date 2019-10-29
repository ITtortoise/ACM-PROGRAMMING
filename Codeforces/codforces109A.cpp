/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1000001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1,t2,t3,t4,t5,r,l,c=0,s=0,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>m;
    n=m;
    k=n;
    for(i=1; i<=sz; i++)
    {
        if(n<=0)
            break;
        if(n%7==0&&n>=7)
        {
            for(t=1; t<=cnt; t++)
                cout<<4;
            for(j=1; j<=n/7; j++)
                cout<<7;

            return 0;
        }

        n=n-4;
        cnt++;
    }
    for(i=1; i<=sz; i++)
    {
        if(k<=0)
            break;
        if(k%4==0&&k>=4)
        {
            for(t=1; t<=c; t++)
                cout<<7;
            for(j=1; j<=k/4; j++)
                cout<<4;

            return 0;
        }

        k=k-7;
        c++;
    }


    cout<<-1;


    return 0;
}
