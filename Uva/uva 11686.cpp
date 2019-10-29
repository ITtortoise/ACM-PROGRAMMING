/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  pi    acos(-1.0)
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,mx,mn,v,r,l,a,b;
string s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll>>v1;
vector<ll>v4[51];
int main()
{
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        v1.pb(mp(a,b));

    }
    cin>>v>>r;

    sort(all(v1));
    bool flag=false;
    for(i=0; i<m-1; i++)
    {
        if(v1[i].ss!=v1[i+1].ff)
        {
            flag=true;
            cout<<"IMPOSSIBLE"<<endl;
            break;
        }
    }

    if(flag==false)
    {
        for(auto i:v1)
            cout<<i.ff<<endl;
        cout<<v1[m-1].ss<<endl;
    }



}




