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

ll n,m,k,i,j,t,s,s2,c,x,r,l1,l2,res,mod,a[sz],MX;
map<string,string>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    string s,s1,s2;
    cin>>n>>m;
    getchar();
    for(i=0; i<m; i++)
    {
        cin>>s1>>s2;
        l1=s1.size();
        l2=s2.size();
        if(l1<=l2)
        {
            _map[s1]=s1;
            _map[s2]=s1;
        }
        else
        {
            _map[s1]=s2;
            _map[s2]=s2;
        }
        getchar();
    }
    for(j=0; j<n; j++)
    {
        cin>>s;
        cout<<_map[s]<<" ";
    }


    return 0;
}

