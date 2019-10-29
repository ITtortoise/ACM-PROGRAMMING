/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
using namespace std;

ll n,m,k,i,j,t=0,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn1=INT_MAX,mn2=INT_MAX;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mn1=min(mn1,a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==mn1)
            v1.pb(i);
    }
    for(i=0; i<v1.size()-1; i++)
    {
        k=abs(v1[i]-v1[i+1]);
        mn2=min(k,mn2);
    }
    cout<<mn2;





    return 0;
}

