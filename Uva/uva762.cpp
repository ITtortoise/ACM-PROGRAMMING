#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 100005
#define EPS 1e-9
#define MOD 1e6+3
#define PI acos(-1.0)

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;

vector<int>G[sz];
vector<int>a;

int n,i,j,u,v,level[sz],vis[sz],s,d,p[sz];

bool BFS()
{
    queue<int>Q;
    level[s]=0;
    vis[s]=1;
    Q.push(s);

    while(!Q.empty()){
        u=Q.front();
        Q.pop();
        if( u == d ) return true;
        for(auto v:G[u]){

            if(!vis[v]){
                level[v]=level[u]+1;
                vis[v]=1;
                p[v] = u;
                Q.push(v);
            }
        }
    }
    return false;
}

void path(int d)
{
    if(d==s)
        return;
    else{
        path(p[d]);
        a.pb(p[d]);
    }
}

void init()
{
    memset(vis,0,sizeof vis);
    memset(level,0,sizeof level);
    memset(p,0,sizeof p);
    for(int i=0; i<sz; i++) G[i].clear();
    a.clear();
}

int main()
{
    int ok = 0;
    while(sf("%d",&n) != EOF){
        if( ok ) cout<<endl;
        ok = 1;
        init();
        string s1,s2;
        map<string,int>mp;
        map<int,string>out;
        int node = 1;
        for(i=0; i<n; i++){
            cin>>s1>>s2;
            if( !mp[s1] ) mp[s1] = node++;
            u = mp[s1];
            out[u] = s1;

            if( !mp[s2] ) mp[s2] = node++;
            v = mp[s2];
            out[v] = s2;

            G[u].pb(v);
            G[v].pb(u);
        }

        cin>>s1>>s2;

        if( !mp[s1] || !mp[s2]) {
            cout<<"No route"<<endl;
            continue;
        }
        s = mp[s1];
        d = mp[s2];

        if( BFS() ){
            path(d);
            a.pb(d);
            for(i=0; i<a.size()-1; i++)
                cout<<out[a[i]]<<' '<<out[a[i+1]]<<endl;
        }

        else cout<<"No route"<<endl;




    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define sz 100005
#define EPS 1e-9
#define MOD 1e6+3
#define PI acos(-1.0)

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long ll;

vector<int>G[sz];
vector<int>a;

int n,i,j,u,v,level[sz],vis[sz],s,d,p[sz];

bool BFS()
{
    queue<int>Q;
    level[s]=0;
    vis[s]=1;
    Q.push(s);

    while(!Q.empty()){
        u=Q.front();
        Q.pop();
        if( u == d ) return true;
        for(auto v:G[u]){

            if(!vis[v]){
                level[v]=level[u]+1;
                vis[v]=1;
                p[v] = u;
                Q.push(v);
            }
        }
    }
    return false;
}

void path(int d)
{
    if(d==s)
        return;
    else{
        path(p[d]);
        a.pb(p[d]);
    }
}

void init()
{
    memset(vis,0,sizeof vis);
    memset(level,0,sizeof level);
    memset(p,0,sizeof p);
    for(int i=0; i<sz; i++) G[i].clear();
    a.clear();
}

int main()
{
    int ok = 0;
    while(sf("%d",&n) != EOF){
        if( ok ) cout<<endl;
        ok = 1;
        init();
        string s1,s2;
        map<string,int>mp;
        map<int,string>out;
        int node = 1;
        for(i=0; i<n; i++){
            cin>>s1>>s2;
            if( !mp[s1] ) mp[s1] = node++;
            u = mp[s1];
            out[u] = s1;

            if( !mp[s2] ) mp[s2] = node++;
            v = mp[s2];
            out[v] = s2;

            G[u].pb(v);
            G[v].pb(u);
        }

        cin>>s1>>s2;

        if( !mp[s1] || !mp[s2]) {
            cout<<"No route"<<endl;
            continue;
        }
        s = mp[s1];
        d = mp[s2];

        if( BFS() ){
            path(d);
            a.pb(d);
            for(i=0; i<a.size()-1; i++)
                cout<<out[a[i]]<<' '<<out[a[i+1]]<<endl;
        }

        else cout<<"No route"<<endl;




    }
    return 0;
}
