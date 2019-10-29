/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    10000
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum,cnt,a[sz],b,d,rem,mod,mx=-1,mn,v,r,l;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    for(i=2;i<=1005;i++)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=sqrt(i);j+=i)
                a[j]=1;
        }
    }

    cin>>n;

    for(i=2; i<=n; i++)
    {
        //cout<<i<<"is: ";
        bool flag=false;
        m=i;
        for(j=2; j<=sqrt(i); j++)
        {
            while(m%j==0)
            {
                flag=true;
                m=m/j;
                //cout<<j<<' ';
                _mp[j]++;
                mx=max(mx,j);

            }
        }
        //cout<<endl;
        if(flag==false)
        {
            _mp[i]++;
            mx=max(mx,i);
        }

    }
    for(auto i:_mp)
        cout<<i.ff<<' '<<i.ss<<' ';
    //cout<<mx;
     /*for(i=2;i<=mx;i++)
     {
         if(a[i]==0)
          cout<<_mp[i]<<' ';
     }*/



}
