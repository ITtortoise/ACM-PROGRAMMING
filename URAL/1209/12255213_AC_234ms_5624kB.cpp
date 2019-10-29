/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    65535
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1=1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    for(i=0; i<=65535; i++)
    {
        t1=t1+i;
        //cout<<t1<<" ";
        _map[t1]=1;
    }
    //cout<<_map[22]<<" "<<_map[24]<<endl;
    cin>>n;
    while(n--)
    {
        cin>>t2;
        cout<<_map[t2]<<endl;

    }

    //cout<<a[n]<<" ";


    return 0;
}


