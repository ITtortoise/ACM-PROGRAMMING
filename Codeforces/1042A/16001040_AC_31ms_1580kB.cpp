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

ll n,i,j,m,k,t,sum=0,temp,cnt=0,ans,a[sz],b[sz],rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<ll>v,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>m;
     temp=m;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v.pb(t);
    }
    sort(all(v));
    k=v[n-1];
     mx=v[n-1];
  sum=temp+k;
    while(v[0]<mx&&m>0)
    {

        for(i=0; i<n; i++)
        {
            temp=0;
            temp=mx-v[i];
            v[i]+=temp;
            m-=temp;

        }

    }
    sort(all(v));
    if(v[0]==mx&&m>0)
    {
        if(m%n!=0)
             ans=mx+(m/n)+1;
        if(m%n==0)
           ans=mx+(m/n);
         cout<<ans<<' '<<sum<<endl;

    }
    else
        cout<<v[n-1]<<' '<<sum<<endl;



    //main();
}

