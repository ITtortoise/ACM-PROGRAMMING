/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,d,j,t,f,r,l,c,w,h,sum=1,cnt,x,y,a[10000000],rem,mod,mx,mn,paisi,temp=1000000000;
string s1,s2;
map<ll,ll>_mp;
set<ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1;
vector<ll>vv[51];
set<ll>st;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>w>>h;
        mx=max(w,h);
        mn=min(w,h);
        if(mx<=temp)
            temp=mx;
        else if(mn<=temp)
            temp=mn;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }


    }
    cout<<"YES"<<endl;
    // main();


}

