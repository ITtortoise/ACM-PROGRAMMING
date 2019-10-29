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

ll n,m,k,i,j,t,r,l,c,f,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(j=0; j<m; j++)
        cin>>b[j];
    sort(b,b+m);
    for(i=0; i<n; i++)
    {
        f=0;
        for(j=0; j<m; j++)
        {
            if(b[j]-a[i]>=0)
            {
                b[j]=0;
                a[i]=0;
                cnt++;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<n-cnt;
            return 0;
        }
    }
    cout<<"0"<<endl;


    return 0;
}
