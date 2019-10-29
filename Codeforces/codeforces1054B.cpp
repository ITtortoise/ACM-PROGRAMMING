/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100009
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum=0,cnt,a[sz],d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
set<ll>st;
set<ll>::iterator it;

int main()
{

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    if(a[0]!=0)
        cout<<1<<endl;
    else
    {
        _mp[0]=1;
        for(i=0; i<n; i++)
        {
            if(_mp[a[i]]==1)
                _mp[a[i]+1]=1;

            else
            {
                cout<<i+1<<endl;
                return 0;
            }

        }
     cout<<-1<<endl;

    }




}
