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

ll n,m,k,t,sum=0,cnt=0,a,b,rem,mod,mx,mn,ans,d,coin;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n>>k>>a>>b;
    if(k==1)
    {
        cout<<(n-1)*a<<endl;
        return 0;
    }
    else
    {
        while(n>1)
        {
            if(n%k!=0)
            {
                ans=ans+((n%k)*a);
                n=n-(n%k);
            }

            else
            {
                d=n/k;
                coin=n-d;
                ans=ans+min(coin*a,b);
                n=d;
            }
        }


    }
    if(n==0)
        ans=ans-a;
    cout<<ans;


    //main();
}

