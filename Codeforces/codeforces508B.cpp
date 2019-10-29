#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k=0,i,j,t,s,s2,c,x,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    string s;
    cin>>s;
    l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]-'0'<s[l-1]-'0'&&(s[i]-'0')%2==0)
        {

            swap(s[i],s[l-1]);
            cout<<s;
            return 0;
        }

    }

    for(j=l-1; j>=0; j--)
    {
        if((s[j]-'0')%2==0)
        {
            swap(s[j],s[l-1]);
            cout<<s;
            return 0;
    }
    }
    for(t=0;t<l;t++)
        if(s[t]-'0'%2!=0)
            m++;
    if(m==l)
        cout<<"-1"<<endl;

   return 0;
}
