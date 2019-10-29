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

ll n,m,k,i,j,t,s,s2,c,x,r,l,res,mod,MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    ll a[]= {1,6,28,120,496,2016,8128,32640,130816,523776};
    cin>>n;
    for(i=8; i>=0; i--)
    {
        if(n%a[i]==0)
        {
            cout<<a[i];
            return 0;
        }
    }






    //return 0;
}
