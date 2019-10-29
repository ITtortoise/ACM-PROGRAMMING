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
long long n,m,i,j,cnt,l;
string str;
vector<ll>vec,vec2;
map<ll,ll>_mp,_mp2,_mp3;
set<ll>st;
char G[100][100];
int vis[100][100];
queue<pair<int,int>>Q;

int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

int BFS(int x,int y)
{
    vis[x][y]=1;
    Q.push({x,y});
    int c = 1;

    while(!Q.empty())
    {
        int a=Q.front().ff;
        int b=Q.front().ss;
        Q.pop();
        for(l=0; l<8; l++)
        {
            int nx=a+dx[l];
            int ny=b+dy[l];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && G[nx][ny] == '*')
            {
                c++;
                vis[nx][ny]=1;
                Q.push({nx,ny});
            }
        }
    }

    return c;



}


int main()
{

    while(cin>>n>>m)
    {


        if(n == 0&&m == 0) break;
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
                cin>>G[i][j];

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(!vis[i][j]&&G[i][j] != '.')
                {

                    if ( BFS(i,j) == 1 ) cnt++;

                }
            }

        }
        cout<<cnt<<endl;
        cnt=0;

        memset(vis,0,sizeof vis);

    }



}

