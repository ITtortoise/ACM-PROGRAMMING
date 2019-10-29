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

ll n,i,j,L,m,k,t,cnt,a,b,d,rem,mod,mx,mn,v,r,l,s1,s2,x;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
ll sum(ll x)
{
    t=0;
    while(x!=0)
    {
        rem=x%10;
        //cout<<rem<<' ';
        t=t+rem;
        x=x/10;


    }
    return t;
}
int main()
{
    cin>>n;
    i=0;
    while(a*10+9<n)
    {
        a=a*10+9;

    }
    b=n-a;
    cout<<sum(b)+sum(a);


}

