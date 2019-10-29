/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
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

ll n,m,k,i,j,t,f,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],b[sz],g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{

    cin>>n;
    cin>>s;
    x=0,y=0;
    t1=100000000000000004;
    t2=10000000000000005;
    for(i=0; i<s.size(); i++)
    {

          //cnt++;
        if(s[i]=='U')
        {
            y=y+1;
            /*if(t1==t2&&(x==y+1||y==x+1))
            //cnt++;
            cout<<t1<<t2<<endl;
            t1=y;*/
            //cout<<x<<y<<endl;
        }
         if(s[i]=='R')
        {
            x=x+1;
            //if(t1==t2&&(x==y+1||y==x+1))
            //cnt++;
            //cout<<t1<<t2<<endl;
            //t2=x;
            //cout<<x<<y<<endl;
        }
        if(x==y&&s[i]==s[i+1])
        {
            cnt++;
        }


    }
    cout<<cnt;


    return 0;
}

