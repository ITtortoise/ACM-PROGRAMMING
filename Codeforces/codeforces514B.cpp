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

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>x>>y;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
            cnt1++;
        if(b[i]==y)
            cnt2++;
        if(abs(a[i]-x)==abs(b[i]-y))
        {
            if((a[i]-x>0&&b[i]-y>0)||(a[i]-x<0&&b[i]-y<0))
                cnt3++;
            else
                cnt4++;


        }
    }
    cout<<cnt1<<cnt2<<cnt3<<cnt4;
    /*if(cnt1>0)
        cnt++;
    if(cnt2>0)
        cnt++;
    if(cnt3>0)
        cnt++;
    if(cnt4>0)
        cnt++;
    cnt+=n-(cnt1+cnt2+cnt3+cnt4);
    cout<<cnt;*/


    return 0;
}

