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

ll n=1,m,k,i,j,t,c,x,r,res,mod,MX,a,b;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>a>>b;
    if((b-a)>4)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=a+1; i<=b; i++)
        n=(n*(i%10))%10;
    cout<<n;
    return 0;
}

