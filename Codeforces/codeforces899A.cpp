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

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,amt[sz];
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>c;
        _map[c]++;
        v1.pb(_map[c]);
    }

    sort(v1.begin(),v1.end());

    //mn=min(v1[0],v1[v1.size()-1]);
    if(_map[1]>_map[2])
    {
        cout<<_map[2]+((_map[1]-_map[2])/3);
    }
    else if(_map[1]<_map[2])
    {
        cout<<_map[1];

    }
    else if(_map[1]==_map[2])
    cout<<_map[1];
    else
        cout<<"0"<<endl;


    return 0;
}
