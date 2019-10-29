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

ll n,m,k,i,j,t,c,x,r,res,mod,a[sz],MX,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,m1,m2,s7,s8;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3,v4;
int main()
{
    cin>>n;
    for(k=0; k<3; k++)
    {
        cin>>x;
        if(x>0)
            v1.pb(x);
        else
            v2.pb(x);
    }
    for(i=0; i<n; i++)
    {
        cin>>c;
        v3.pb(c);
    }
    sort(all(v3));
    /*for(i=0;i<v3.size();i++)
     cout<<v3[i]<<" ";*/
    for(j=0;j<v1.size();j++)
        s1=s1+v1[j]*v3[v3.size()-1];
    for(m=0;m<v2.size();m++)
        s2=s2+v2[m]*v3[0];
  cout<<s1+s2;

    return 0;
}

