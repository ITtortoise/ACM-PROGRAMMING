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

ll n,m,k,i,j=0,t,sum=0,c,x,r,l,rem,y,z,mod,a[sz],MX;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>t;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(t>=sum)
            c++;
        else
        {
            sum=sum-a[j];
            j++;
        }
    }
    cout<<c<<endl;

    return 0;
}
