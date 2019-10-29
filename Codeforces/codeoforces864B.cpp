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

ll n,m,k,i,j,t,c=0,c1,x,r,res,mod,a[sz],MX;
map<char,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    string s;
    cin>>n;
    getchar();
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        for(i=i; islower(s[i]); i++)
            _map[s[i]]=0;
            c=_map.size();
            v1.pb(c);
       _map.clear();
    }
   sort(v1.begin(),v1.end());
   cout<<v1[v1.size()-1];
    return 0;
}

