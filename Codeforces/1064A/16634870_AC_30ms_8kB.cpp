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

ll n,i,j,L,m,k,t,sum,cnt,a,b,c,d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    while(cin>>a>>b>>c)
    {
        sum=0;
        v1.pb(a);
        v1.pb(b);
        v1.pb(c);
        sort(all(v1));
        sum=v1[0]+v1[1];
        k=v1[2]-sum;
        if(k>=0)
        cout<<k+1<<endl;
        else
            cout<<0<<endl;
        v1.clear();
    }


}

