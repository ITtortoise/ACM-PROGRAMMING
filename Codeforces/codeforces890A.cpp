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

ll n,m,k,i,j,s,s2,c,r,res,mod,a[sz],MX;
double x,t;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    for(i=0; i<6; i++)
    {
        cin>>a[i];
        s2=s2+a[i];
    }
    if(s2%2==0)
     x=s2/2;
     else
        x=(s2/2)+.5;

    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++)
        {
            t=x-(a[i]+a[j]);
              for(k=j+1; k<6; k++)
            {
                if(a[k]==t)
                {
                    cout<<"yes"<<endl;
                    return 0;
                }
            }
        }

    }
    cout<<"NO"<<endl;
    return 0;
}

