/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j=0,t,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a[sz],a1[sz],g,z,rem,mod,mx=-1,mn;
double d;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        _map[a[i]]++;
    }
    sort(a,a+n);
    mx=a[n-1];
    t=_map[mx];

    if(t%2==0)
        cout<<"Agasa"<<endl;
    else
        cout<<"Conan"<<endl;



    return 0;
}
