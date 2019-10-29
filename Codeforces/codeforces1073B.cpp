#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 200005
#define EPS 1e-9
#define PI acos(-1.0)
#define MOD 1e6 + 3

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;
typedef pair<ll,ll> pii;
typedef pair<char,ll> pci;
typedef pair<string,ll> psi;



vector<ll>G[sz];
queue<ll>Q;

ll vis[sz];
ll fsize[sz];


ll BFS(ll s)
{
    ll cnt=1;
    if(vis[s]==1)
        return 0;
    else vis[s]=1;

    Q.push(s);

    while(!Q.empty()){
        ll u=Q.front();
        Q.pop();
        for(auto v:G[u]){
            if(!vis[v]){
                vis[v]=1;
                Q.push(v);
                cnt++;
            }
        }
    }

    return cnt;
}

ll n,i,j,a[sz],b[sz];

int main()
{
    cin>>n;

    for(i=0; i<n ; i++) cin>>a[i];
    for(i=0; i<n ; i++) cin>>b[i];

    for(i=n-1; i>0; i--)
        G[a[i]].pb(a[i-1]);

    for(i=0; i<n ; i++)
        cout<<BFS(b[i])<<' ';


    return 0;
}
