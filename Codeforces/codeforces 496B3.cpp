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
string s1,s2;
map<ll,ll>_mp;
set<ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1;
vector<ll>vv[51];
set<ll>st;
int main()
{

    cin>>s1>>s2;
    int l1=s1.size();
    int l2=s2.size();
    for(i=l1-1,j=l2-1; i>=0&&j>=0; i--,j--)
    {
        if(s1[i]==s2[j])
            cnt+=2;
        else
            break;
    }
    if(s1[l1-1]==s2[l2-1])
        cout<<l-cnt<<endl;
    else
        cout<<l<<endl;
    _mp.clear();
    v1.clear();
    v.clear();
    st.clear();
    memset(a,0,sizeof a);
    l=0,cnt=0;

    // main();


}

