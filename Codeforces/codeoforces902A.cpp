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

ll n=5,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i]>>b[i];
    if(a[0]!=0||b[n-1]<m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]<=b[i])
            continue;
        else
        {
            cout<<"NO";
            return 0;
        }
    }



    cout<<"YES"<<endl;


    return 0;
}
