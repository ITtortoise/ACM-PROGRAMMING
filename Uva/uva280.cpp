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
#define  dbg    cout<<"welldone"
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

ll n,i,j,k,x,t,tc,cnt,a[10000],rem,mod,mx,mn,u,v,start,q,vis[sz];
//memset(a,0,sizeof(a));
string s2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<ll>vec,vec2;
vector<ll>G[sz];
set<ll>st;
queue<int> Q;

void BFS(int s)
{
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
                Q.push(v);
                cnt++;

            }
        }
    }

}

int main()
{

    int n;

    while(true)
    {
        cin>>n;
        if(n==0) break;
        while(true)
        {
            cin>>u;
            if(u==0) break;
            while(true)
            {
                cin>>v;
                if( v == 0 ) break;
                else G[u].pb(v);
            }
        }
        cin>>q;
        while(q--)
        {
            cin>>v;
            BFS(v);
            cout<<n-cnt;
            for(int i=1; i<=n; i++)
            {
                if(!vis[i])
                {
                    cout<<" "<<i;
                }
            }
            cout<<endl;
            memset(vis,0,sizeof vis);
            cnt=0;
        }
        for(i=1; i<=n; i++)
            G[i].clear();

    }


    return 0;


}

