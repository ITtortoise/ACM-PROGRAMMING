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

ll n,i,j,L,m,k,t,sum=0,cnt,a,b,d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    while(cin>>n>>s)
    {
        cnt=0;t=0;
        for(i=0; s[i]; i++)
        {
            if(s[i]=='8')
                cnt++;
        }
        t=n/11;
        cout<<min(t,cnt);
    }


}

