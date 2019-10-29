#include<bits/stdc++.h>
#define  sz    100001
#define  pb     push_back
#define  ll    long long
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;

ll n,i,j,k,x,t,tc,cnt,rem,mod,mx,mn,u,v,start,q,m,p;
string s2;
map<char,int>_mp;
map<ll,ll>::iterator it;
vector<ll>vec2;
set<ll>st;
queue<int>Q;
vector< pair<char,int> >vec;

bool comp( pair<char,int> a,pair<char,int> b )
{
    if(a.ss==b.ss)
    {
        return a.ff<b.ff;
    }
    return a.ss>b.ss;

}

char G[101][101];
int vis[101][101];

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void BFS(int x,int y)
{
    vis[x][y] = 1;
    queue<pair<int,int>>Q;
    Q.push({x,y});
    char ch = G[x][y];

    _mp[ch]++;

    while(!Q.empty())
    {
        int a = Q.front().ff;
        int b = Q.front().ss;
        Q.pop();

        for(int k=0; k<4; k++)
        {
            int nx = a+dx[k];
            int ny = b+dy[k];

            if( nx >= 0 && nx < n && ny >=0 && ny < m && !vis[nx][ny] && G[nx][ny] == ch )
            {
                vis[nx][ny] = 1;
                Q.push({nx,ny});
                _mp[ch]++;
            }
        }
    }
    vec.pb({ch,_mp[ch]});

}

int main()
{
    while(cin>>n>>m)
    {
        if(n==0&&m==0) return 0;

        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                cin>>G[i][j];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if( vis[i][j] == 0 && G[i][j] != '.')
                {
                    _mp.clear();
                    BFS(i,j);

                }
            }
        }
        p++;
        cout<<"Problem "<<p<<":"<<endl;
        sort(all(vec),comp);
        for(auto i:vec) cout<<i.ff<<' '<<i.ss<<endl;

        vec.clear();
        _mp.clear();
       memset(vis,0,sizeof vis);

    }

    return 0;


}


