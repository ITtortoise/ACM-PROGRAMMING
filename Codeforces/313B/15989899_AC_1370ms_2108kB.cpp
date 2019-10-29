/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
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

ll n,m,i,k,t,l,r,sum=0,cnt=0,a[sz],b[sz],rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>s;
    for(i=0; i<s.size(); i++)
    {

        if(s[i]==s[i-1])
            a[i+1]=a[i]+1;
        else
            a[i+1]=a[i];

            //cout<<a[i+1]<<' ';
    }

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        cout<<abs(a[l]-a[r])<<endl;
    }

       //main();
}


