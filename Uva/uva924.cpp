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

string str;
vector<ll>vec,vec2;
map<ll,ll>_mp,_mp2,_mp3;
vector<ll>G[sz];
set<ll>st;
queue<int >Q;
int vis[sz],lev[sz];
long long n,m,t,i,j,cnt,q,s,u,v,k,M,D;
void BFS(int s)
{
    lev[s]=0;
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
                lev[v]=lev[u]+1;
                vis[v]=1;
                Q.push(v);
            }
        }
    }





}
int main()
{

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>m;
        for(j = 0; j < m; j++)
        {
            cin>>t;
            G[i].pb(t);
        }
    }
    cin>>q;
    while(q--)
    {
        cin>>s;
        BFS(s);
        for(i=0; i<n; i++)
          _mp[lev[i]]++;

        if(_mp.size()==1)
            cout<<0<<endl;
        else if(_mp.size()==2)
            cout<<_mp[1]<<' '<<1<<endl;
        else
        {
            int M=_mp[1];int D=1;
            for(i=1;i<_mp.size()-1;i++)
            {
                if(_mp[i+1]>_mp[i])
                {
                    M=_mp[i+1];
                    D=i+1;
                }
            }
            cout<<M<<' '<<D<<endl;
        }
        _mp.clear();
        memset(lev,0,sizeof lev);
        memset(vis,0,sizeof vis);

    }

    // main();
}

