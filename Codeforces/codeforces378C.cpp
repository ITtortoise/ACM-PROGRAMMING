/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    ff     first
#define    ss     second
#define   all(x) x.begin(),x.end()

using namespace std;

ll n,m,k,i,j,t,temp,r,l,c,s=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,amt[sz];
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2;
vector<pair<int,int> >vec;
set<int>s1,s2;
set<int>::iterator it;
int main()
{
    cin>>n>>m;
    for(i=0;i<=n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
    {
        cin>>t;
        for(j=0;j<n;j++)
        {
            s=s+a[j];
            if(s>=t){cout<<s<<endl;
            break;}
            /*if(s==t)
                cout<<j+1<<' '<<a[j]<<endl;
            else if(s>t)
            {
                cout<<j+2<<' '<<s-a[j]<<endl;
            }*/
        }
    }

     return 0;
}
