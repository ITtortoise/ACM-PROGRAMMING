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

ll n,i,j,L,m,k,t,sum=0,cnt=3,a,b,d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{

    while(cin>>l>>r>>a)
    {
        if(l>r)
        {
            if(a>l-r)
            {
                t=r+(l-r);
                a-=l-r;
                ll ropabo=a/2;
                cout<<2*(t+ropabo)<<endl;

            }
            else if(a<=l-r)
            {
               t=r+a;
               cout<<t*2<<endl;
            }
        }
        else if(l<r)
        {
            if(a>r-l)
            {
               t=l+(r-l);
               a-=r-l;
               ll ropabo=a/2;
               cout<<2*(t+ropabo)<<endl;
            }
            else if(a<=r-l)
            {
               t=l+a;
               cout<<t*2<<endl;
            }
        }
        else if(l==r)
        {
            t=a/2;
            cout<<2*(l+t)<<endl;
        }
    }


}
