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

ll n,m,b,k,i,j,t,c,x,r,res,mod,a[sz],MX,s=0;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    n=1;
    m=1;
    cin>>b;
    for(i=b-2; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            s=s+n+m;

        }
        m++;
        //cout<<s<<" ";
    }
    cout<<s+b+(b-1);
    return 0;
}

