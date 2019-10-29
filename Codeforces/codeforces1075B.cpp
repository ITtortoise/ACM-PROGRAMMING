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

ll n,i,j,m,k,t,sum,cnt,a[10000009],b[10000009],amt[10000009],d,rem,mod,mx,mn,v,r,l,ld,rd;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v4[51];
int main()
{
    cin>>n>>m;
    for(i=1; i<=n+m; i++)
        cin>>a[i];

    for(i=1; i<=n+m; i++)
        cin>>b[i];
    if(m==1)
    {
        cout<<n;
        return 0;
    }
    for(t=1; t<=n+m; t++)
    {
        if(b[t]==0)
        {
            rd=10000000;
            ld=10000000;
            //cout<<a[t]<<endl;
            //return 0;
            for(j=t+1; j<=n+m; j++)
            {
                if(b[j]==1)
                {
                    rd=abs(a[t]-a[j]);
                    break;
                }
            }
            //cout<<j<<' ';
            for(k=t-1; k>=1; k--)
            {
                if(b[k]==1)
                {
                    ld=abs(a[t]-a[k]);
                    break;
                }
            }
            //cout<<ld<<k<<endl;

            if(rd>=ld)
                amt[a[k]]++;
            else
                amt[a[j]]++;

        }

    }
    for(i=1; i<=n+m; i++)
    {
        if(b[i]==1)
            cout<<amt[a[i]]<<' ';
    }



}

