/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        v1.push_back(t);
    }
    sort(all(v1));
    if(v1.size()%2==0)
        cout<<v1[(v1.size()/2)-1];
    else
        cout<<v1[v1.size()/2];

    return 0;
}

