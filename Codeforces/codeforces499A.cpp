/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
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


double n,m,d,r,l,sum=0,cnt=0,x,y,z,rem,mod,a[sz],a1[sz],b1[sz],b[sz],mx,mn,start,finish;
int i,t,j=1,k;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>x;
    a[0]=0,b[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        a[i]=a[i]-1;
    }
    for(i=0; i<=n; i++)
    {
        t=(a[i+1]-b[i])/x;
        a1[j++]=t*x+b[i];



    }
    for(k=1;k<=n;k++)
        //cout<<a1[k]<<" ";
        sum=sum+(b[k]-a1[k]);
    cout<<sum;





    return 0;
}
