/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1000
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum,total,cnt,a[sz],b,d,rem,mod,mx,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);
    }

    for(k=mx;; k++)
    {
        total=0;
        for(j=0; j<n; j++)
        {
            total+=(k-a[j]);

        }
        //cout<<total<<' '<<k<<endl;

        if(total>sum)
        {
            cout<<k<<endl;
            return 0;
        }
    }

}

