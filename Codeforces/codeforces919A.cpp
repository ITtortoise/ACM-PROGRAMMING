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

ll n,k,i,j=0,t,f,s,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=1,x,a[sz],y,g,z,rem,mod,mx,mn=INT_MAX;

string s1,s2,s3,s4,s5;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<double>v1,v2,v3;
vector<ll>v4[51];
int main()
{

        for(i=19; cnt<=10005; i++)
        {
            n=i;
            s=0;
            while(n>0)
            {
                rem=n%10;
                n=n/10;
                s=s+rem;
            }
            if(s==10)
            {
                a[cnt]=i;
                cnt++;

            }
        }
        cin>>t;
        cout<<a[t];




    return 0;
}
