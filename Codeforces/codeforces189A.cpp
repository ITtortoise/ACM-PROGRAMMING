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

double n,m,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a,b,mx,mn,ma,mb,mc;
ll t,i,j,k;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;
    for(t=0; t<3; t++)
    {
        cin>>r;
        v1.pb(r);
    }
    sort(v1.begin(),v1.end());
    a=v1[0];
    b=v1[1];
    c=v1[2];
    ma=(n/a);
    mb=(n/b);
    mc=(n/c);
    //cout<<ma<<mb<<mc;
    for(k=0; k<=mc; k++)
        for(j=k; j<=mb; j++)
            for(i=ma-k; i>=0; i--)
            {
                if((i*a)+(j*b)+(k*c)==n)
                 v2.pb((i+j+k));
            }
    sort(v2.begin(),v2.end());
    cout<<v2[v2.size()-1];


    return 0;
}
