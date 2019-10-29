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

ll n,i,j,m,k,t,sum=0,cnt=0,a,b,d,rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
bool check(ll k)
{
    for(i=2; i<=sqrt(k); i++)
        if(k%i==0)
            return false;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a-b==1)
        {
            k=(a-b)*(a+b);
            bool ck=check(k);
            if(ck==false)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    //main();
}
