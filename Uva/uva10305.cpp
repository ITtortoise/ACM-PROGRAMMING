#include<bits/stdc++.h>
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,e,r,l,c,sum=0,cnt=0,x,y,z,u,v,rem,mod,a[sz],b[sz],mx,mn,indegree[sz];
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >vec;
vector<ll>_list[sz],v2,v3,node;
queue<int>_queue;
void topsort()
{
    while(!_queue.empty())
    {
        u=_queue.front();
        _queue.pop();
        for(i=0; i<_list[u].size(); i++)
        {
            v=_list[u][i];
            indegree[v]--;
            if(indegree[v]==0)
            {
                node.push_back(v);
                _queue.push(v);
            }

        }
    }
}
int main()
{
    while(cin>>n>>e){
            if(n==0&&e==0)
             return 0;
    memset(indegree,0,sizeof indegree);
    node.clear();
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        _list[u].push_back(v);
        indegree[v]++;
    }
    for(i=1; i<=n; i++)
    {
        if(indegree[i]==0)
        {
            node.push_back(i);
            _queue.push(i);
        }
    }
    topsort();
    for(i=0;i<n;i++)
        cout<<node[i]<<' ';
        cout<<endl;
    _queue=queue<int>();
    for(i=0;i<n;i++)
      _list[i].clear();}


    return 0;
}

