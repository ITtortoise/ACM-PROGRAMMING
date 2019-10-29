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

ll n,m,k,i,j,t,s,s2,c=0,x,r,l,rem,y,z=0,mod,a[sz],mx,mn,p;
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
    v2=v1;
    sort(v2.begin(),v2.end());
    mx=v2[n-1];
    mn=v2[0];
    for(i=n-1; i>=0; i--)
    {
        if(v1[i]==mn)
        {
            for(j=i; j<n-1; j++)
            {
                swap(v1[j],v1[j+1]);
                z++;//X
            }
            break;

        }

    }
    for(x=0; x<n; x++)
    {
        if(v1[x]==mx)
        {
            for(y=x;y>0;y--)
            {
                swap(v1[y],v1[y-1]);
                z++;
            }
            break;
        }
    }
    cout<<z;



    return 0;
}

