/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    3.1415926535897932
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,r,l,c,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
double sum=0;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{

    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=n-1; i>=0; i-=2)
      sum=sum+(pi*(a[i]*a[i])-pi*(a[i-1]*a[i-1]));

    printf("%.10lf",sum);


    return 0;
}

