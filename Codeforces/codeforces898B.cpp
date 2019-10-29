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

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a,b,mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n>>a>>b;
    if(n%a==0)
    {
        cout<<"YES"<<endl<<n/a<<" "<<"0"<<endl;
        return 0;
    }
    if(n%b==0)
    {
        cout<<"YES"<<endl<<"0"<<" "<<n/b<<endl;
        return 0;
    }

    for(i=1;i<10000000; i++)
    {
        m=a*i;
        if((n-m)%b==0)
        {
            if(((n-(a*i))/b)>0)
            {cout<<"YES"<<endl<<i<<" "<<(n-(a*i))/b<<endl;
            return 0;}
        }
    }
    cout<<"NO"<<endl;


    return 0;
}

