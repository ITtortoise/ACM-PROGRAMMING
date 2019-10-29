///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    100001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;

vector<ll>G[sz];
long long n,m,i,j,cnt,l,u,v,s,x,y,T;
queue<int >Q;
int vis[sz];

void BFS(int s)
{
    vis[s]=1;
    Q.push(s);
    cnt++;

    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(auto v:G[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                Q.push(v);
                cnt++;
            }
        }
    }

}
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>m>>l;
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            G[x].pb(y);
            //G[y].pb(x);
        }

        for(i=0; i<l; i++)
        {
            cin>>s;
            if(!vis[s])
             BFS(s);
        }

        cout<<cnt<<endl;
        cnt = 0;

        for(i=0; i<sz; i++) G[i].clear();
        memset(vis,0,sizeof vis);
    }

    return 0;
}

