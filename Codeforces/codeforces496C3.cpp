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

ll n,m,k,i,d,j,t,f,r,l,c,sum,cnt,x,y,a[sz],rem,mod,mx,mn;
string s,s2;
map<ll,ll>_mp;
set<ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2;
vector<ll>vv[51];
set<ll>st;
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v1.pb(t);
    }
    for(i=0; i<n-1; i++)
    {
        if(v1[i]>=v1[i+1])
            v2.pb(v1[i]);
    }
    v2.pb(v1[n-1]);
    cout<<v2.size()<<endl;
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<' ';


    _mp.clear();
    v1.clear();
    v.clear();
    v2.clear();
    st.clear();
    memset(a,0,sizeof a);
    sum=0,cnt=0;

    //main();


}
