/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    1000001
#define    ll    long long
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],amt[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v1.push_back(t);
    }
    sort(all(v1));

    if(k==0)
    {
        if(v1[0]-1!=0)
            cout<<v1[0]-1;
        else
            cout<<-1;
    }
    else
    {
        if(v1[k-1]==v1[k])
            cout<<-1;
        else
            cout<<v1[k-1];

    }
    //cout<<v1[k-1]<<' '<<v1[k];
    return 0;
}
