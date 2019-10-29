///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second


#define  dbg    cout<<"welldone"
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

ll n,i,j,k,x,t,tc,cnt,a[10000],rem,mod,mx,mn;
//memset(a,0,sizeof(a));
string s,s2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<ll>vec,vec2;
vector<ll>G[51];
set<ll>st;

int main()
{
    cin>>tc;
    {
        ll a,d,sum1=0,sum2=0;
        for(t=1; t<=tc; t++)
        {
            cin>>n>>k>>x;
            sum1=2+(n-1);
            sum1*=n;
            sum1/=2;

            sum2=(2*x)+(k-1);
            sum2*=k;
            sum2/=2;
            cout<<"Case "<<t<<": "<<sum1-sum2<<endl;

            //dbg;
        }
    }



    // main();


}


