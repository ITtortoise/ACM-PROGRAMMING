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

ll n,m,k,i,j,t,s,s2,c,x,r,res,mod,a[sz],MX,min1,min2;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    string s;
    int l=0,r=0,u=0,d=0;
    cin>>n;
    getchar();
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
            l++;
        else if(s[i]=='R')
            r++;
        else if(s[i]=='U')
            u++;
        else if(s[i]=='D')
            d++;
    }
    min1=min(l,r);
    min2=min(u,d);
    cout<<(min1*2)+(min2*2);

    return 0;
}

