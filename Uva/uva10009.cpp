#include<bits/stdc++.h>
using namespace std;

#define sz 100005
#define ERROR 1e-9
#define PI acos(-1.0)
#define MOD 10000007
#define INF 0x3f3f3f3f

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define all(x) x.begin(),x.end()

typedef long long  ll;

vector<int>G[sz];
queue<int>Q;
string s1,s2,ch;
int n,e,i,j,u,v,lev[sz],vis[sz],s,d,p[sz],q,t;

void BFS(int s)
{
    vis[s]=1;
    Q.push(s);

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(int v:G[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                p[v]=u;
                Q.push(v);
            }
        }
    }
}

void path(int d)
{
    if(d==s)
        return;
    else
    {
        path(p[d]);
        ch+=p[d]+'0';

    }
}

int main()
{
    int T;
    int flag = 0;
    cin>>T;

    while(T--)
    {
        if( flag ) cout<<endl;
        flag = 1;
        cin>>e>>q;
        for(i=0; i<e; i++)
        {
            cin>>s1>>s2;
            u=s1[0]-'0';
            v=s2[0]-'0';
            G[u].push_back(v);
            G[v].push_back(u);
        }
        for(int t=0; t<q; t++)
        {
            cin>>s1>>s2;
            s=s1[0]-'0';
            BFS(s);
            d=s2[0]-'0';
            path(d);
            ch+=d+'0';
            cout<<ch<<endl;

            memset(p,0,sizeof p);
            memset(vis,0,sizeof vis);
            ch = "";
        }

        for(i=0;i<sz;i++) G[i].clear();

    }

    return 0;
}
