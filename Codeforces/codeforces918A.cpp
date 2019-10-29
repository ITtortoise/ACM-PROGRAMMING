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

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x=1,y=1,a[sz],b[sz],g,z,rem,mod,mx,mn;
//string s1,s2,s3;
char s1[sz],s2[sz];
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    ll a[15]={1,2,3,5,8,13,21 ,34, 55 ,89 ,144, 233 ,377 ,610 ,987};
    cin>>n;
    for(i=1;i<=n;i++)
        s1[i]='o';
    for(i=0;a[i]<=n;i++)
     {
         s1[a[i]]='O';
     }
     for(i=1;i<=n;i++)
        cout<<s1[i];


    return 0;
}

