#include<bits/stdc++.h>
using namespace std;

vector<long long> _list[100000],node;
vector<pair<long,long> >v1;
queue<long long >_queue;
long long  n,e,u,v,i,j,k,s,p,d,status[10000000],level[10000000];
void BFS()
{
    status[s]=1;
    level[s]=0;
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();
        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];
            if(!status[v])
            {
                status[v]=1;
                level[v]=level[u]+1;
                v1.push_back(make_pair(v,level[v]));
                _queue.push(v);
            }
        }
//return ;

    }
    sort(v1.begin(),v1.end());
    for(i=0;i<v1.size();i++)
        cout<<v1[i].second<<endl;
    //cout<<v1[v1.size()-1].second;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(status,0,sizeof(status));
        memset(level,0,sizeof(level));
        cin>>n>>e;
        for(i=0; i<e; i++)
        {
            cin>>u>>v;
            _list[u].push_back(v);
            _list[v].push_back(u);
        }
        _queue.push(s);
        BFS();
        v1.clear();
        _queue=queue<long long>();
        for (int y = 0; y <n; y++)
        {
            _list[y].clear();
        }
    }

}
