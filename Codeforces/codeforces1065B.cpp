/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,m,k,t1,f,t2,s,cnt,a,b,d,rem,mod,mx,mn;
string s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    s=0;
    cin>>n>>m;
    t1=n-(m*2);
    if(t1>0)
        cout<<t1<<' ';
    if(t1<=0)
        cout<<0<<' ';
    for(i=1;; i++)
    {

        s=s+i;
        if(s>=m)
        {
            t2=i+1;
            break;
        }



    }
    cout<<n-t2;
   // main();
}

