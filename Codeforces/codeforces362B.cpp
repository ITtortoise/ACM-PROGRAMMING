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

ll n,m,k,i,j,t,sum=0,c,x,r,l,rem,y,z,mod,a[sz],MX;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>m>>n;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.pb(c);

    }
    sort(v1.begin(),v1.end());
    if(n==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(v1[0]==1||v1[n-1]==m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0; i<n-2; i++)
    {
        if(v1[i+1]-v1[i]==1)
        {
            if(v1[i+2]-v1[i+1]==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }

    cout<<"YES"<<endl;


    return 0;
}

