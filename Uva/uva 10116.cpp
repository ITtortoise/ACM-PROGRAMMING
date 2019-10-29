///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    10
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  dbg    cout<<"welldone";
#define  all(x)   x.begin(),x.end()
#define sf(value)      scanf("%lld",&value)
#define pf(value)      printf("%lld",&value)
using namespace std;

ll n,i,j,sum,cnt,a[10000],rem,mod,mx,mn,R,C,P,x,y,visited[sz][sz];
//memset(a,0,sizeof(a));
string s,str2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<string>grid;
set<ll>st;

int main()
{
    while(1)
    {
        cin>>R>>C>>P;
        if(R==0&&C==0&&P==0)
            break;
        grid.clear();
        for(i=0; i<R; i++)
        {
            cin>>s;
            grid.pb(s);
        }
        x=0;
        y=P-1;
       visited[x][y]=0;
       memset(visited,-1,sizeof(visited));
       cnt=0;
       bool loop=false;
        while(1)
        {
             cnt++;
            if(grid[x][y]=='N')x--;
            else if(grid[x][y]=='S')x++;
            if(grid[x][y]=='W')y--;
            else y++;

            if(x>=R||x<0||y>=C||y<0)
                break;
          if(visited[x][y]!=-1)
          {
              loop=true;
              break;
          }
          else
            visited[x][y]=cnt;


        }
        if(!loop)
            cout<<cnt<<" step(s) to exit"<<endl;
        else
            cout<<visited[x][y]<<" step(s) before a loop of "<<cnt-visited[x][y]<<" step(s)"<<endl;


    }



    // main();


}

