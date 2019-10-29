/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    ff     first
#define    ss     second
#define     all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,b,g,z,rem,mod,A,B,mx,mn,pos;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    while(cin>>n>>pos>>l>>r)
    {if(l==1&&r==n)
        cout<<0;
    else if(l==1 && r<n)
        cout<<abs(pos-r)+1;
    else if(l>1 && r==n)
        cout<<abs(pos-l)+1;
    else
        cout<<min((abs(pos-l)+abs(l-r)),(abs(pos-r)+abs(r-l)))+2;}


    return 0;
}
