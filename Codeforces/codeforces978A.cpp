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

ll n,m,k,i,j,t,temp,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,amt[sz];
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
set<int>s1,s2;
set<int>::iterator it;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v1.pb(t);
    }
    reverse(all(v1));
    for(i=0; i<n; i++)
    {
        s1.insert(v1[i]);
        if(s1.size()>temp)
        {
            v2.pb(v1[i]);
            temp=s1.size();
        }
        //cout<<i<<' '<<s1.size()<<' '<<temp<<' '<<s2.size()<<endl;
    }
    cout<<s1.size()<<endl;
    reverse(all(v2));
    for(i=0;i<s1.size();i++)
        cout<<v2[i]<<' ';
    return 0;
}
