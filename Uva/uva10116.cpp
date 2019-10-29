///"BISMILLAHIR RAHMANIR RAHIM....."
///"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
///submited by:SHOHAG(ICT,MBSTU).......
#include<bits/stdc++.h>
#define  sz    1001
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

ll n,i,j,sum,cnt,a[10000],rem,mod,mx,mn,x,y,pos,vuj,koti,visited[sz][sz],traverse[sz][sz];
//memset(a,0,sizeof(a));
string str,str2;
map<ll,ll>_mp,_mp2,_mp3;
map<ll,ll>::iterator it;
vector<string>grid;
vector<ll>G[51];
set<ll>st;

int main()
{

    while(1)
    {
        cin>>x>>y>>pos;

        if(x==0&&y==0&&pos==0)
            break;

        for(i=0; i<x; i++)
        {
            cin>>str;
            grid.pb(str);

        }
//    for(i=0; i<x; i++)
//    {
//        for(j=0; j<y; j++)
//        {
//            cout<<grid[i][j]<<' ';
//        }
//        cout<<endl;
//    }

        vuj=0;
        koti=pos-1;
        //visited[vuj][koti]=1;
        // cout<<grid[vuj][koti]<<endl;
        //    return 0;
        ll loop=0;
        cnt=0;
        while(1)
        {
            if(visited[vuj][koti]==1)
            {
                loop=1;
                //cout<<vuj<<' '<<koti<<traverse[vuj][koti]<<' '<<"loop"<<endl;
                //cnt++;
                break;
            }

            else
            {
                if(grid[vuj][koti]=='N')
                {
                    visited[vuj][koti]=1;

                    traverse[vuj][koti]=cnt;
                    //cout<<vuj<<' '<<koti<<' '<<grid[vuj][koti]<<traverse[vuj][koti]<<endl;
                    cnt++;
                    vuj--;


                }
                else if(grid[vuj][koti]=='S')
                {
                    visited[vuj][koti]=1;

                    traverse[vuj][koti]=cnt;
                    //cout<<vuj<<' '<<koti<<' '<<grid[vuj][koti]<<traverse[vuj][koti]<<endl;
                    vuj++;
                    cnt++;


                }
                else if(grid[vuj][koti]=='E')
                {
                    visited[vuj][koti]=1;

                    traverse[vuj][koti]=cnt;
                    //cout<<vuj<<' '<<koti<<' '<<grid[vuj][koti]<<traverse[vuj][koti]<<endl;
                    cnt++;
                    koti++;


                }
                else if(grid[vuj][koti]=='W')
                {
                    visited[vuj][koti]=1;

                    traverse[vuj][koti]=cnt;
                    //cout<<vuj<<' '<<koti<<' '<<grid[vuj][koti]<<traverse[vuj][koti]<<endl;
                    cnt++;
                    koti--;


                }
                //cout<<grid[vuj][koti]<<endl;

                if(vuj<0||vuj>=x||koti<0||koti>=y)
                {
//                cout<<"out of grid"<<endl;
//                cout<<vuj<<' '<<koti<<endl;
                    break;
                }
            }

        }
        if(loop==0)
            cout<<cnt<<" step(s) to exit"<<endl;
        else
            cout<<traverse[vuj][koti]<<" step(s) before a loop of "<<cnt-traverse[vuj][koti]<<" step(s)"<<endl;
        grid.clear();
        memset(traverse,0,sizeof(traverse));
        memset(visited,0,sizeof(visited));
    }




    //main();



}


