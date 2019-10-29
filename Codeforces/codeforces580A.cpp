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

ll n,m,k,i,j,t,sum=0,c,x,r,l=1,rem,y,z,mod,a[sz],MX1=0,MX2=0,cnt=1;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.pb(c);
    }

    for(i=0; i<n-1; i++)
    {
        if(v1[i+1]-v1[i]>=0)
        {
            cnt++;
            l=cnt;
        }

        else
        {
            v2.pb(cnt);
            cnt=1;

        }

    }
    v2.pb(l);
    sort(v2.begin(),v2.end());
    cout<<v2[v2.size()-1];





    return 0;
}
