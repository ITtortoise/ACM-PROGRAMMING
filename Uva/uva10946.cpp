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

ll n,i,j,k,x,t,tc,cnt,rem,mod,mx,mn,u,v,start,q,m;
string s2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<ll>vec2;
set<ll>st;
queue<int>Q;

vector< pair<char,int> >vec;

bool comp( pair<char,int> a,pair<char,int> b ){
    return a.ss>b.ss;
}

char G[100][100];
int vis[100][100];

int dx[] = { -1, 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void BFS(int x,int y)
{
    vis[x][y] = 1;
    queue<pair<int,int>>Q;
    Q.push({x,y});
    char ch = G[x][y];
    map<char,int>mp;
    mp[ch]++;

    while(!Q.empty()){
        int a = Q.front().ff;
        int b = Q.front().ss;
        Q.pop();

        for(int k=0; k<4; k++){
            int nx = a+dx[k];
            int ny = b+dy[k];

            if( nx >= 0 && nx < n && ny >=0 && ny < n && !vis[nx][ny] && G[nx][ny] == ch ){
                vis[nx][ny] = 1;
                Q.push({nx,ny});
                mp[ch]++;
            }
        }

    }

    //cout<<ch<<' '<<mp[ch]<<endl;
    vec.pb({ch,mp[ch]});

}

int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
         cin>>G[i][j];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if( vis[i][j] == 0 && G[i][j] != '.'){
                BFS(i,j);
            }
        }
    }
    sort(all(vec),comp);
    for(auto i:vec) cout<<i.ff<<' '<<i.ss<<endl;

    return 0;


}


