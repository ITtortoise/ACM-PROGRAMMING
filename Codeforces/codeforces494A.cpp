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

ll n,m,k,i,j,t,s,s2,c=0,x,r,l,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++)
        if(s[i]=='Q')
            for(j=i+1; j<s.size(); j++)
                if(s[j]=='A')
                    for(k=j+1;k<s.size();k++)
                        if(s[k]=='Q')
                          c++;
        cout<<c;




    //cout<<c;

    return 0;
}

