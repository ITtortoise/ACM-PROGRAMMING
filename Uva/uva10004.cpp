#include<bits/stdc++.h>
using namespace std;
queue<int>_queue;
vector<int>_list[100000];
long long e,n,u,v,i,j,k,s,color[100000],status[100000];

bool bicolouring()
{

    _queue.push(s);
    status[s]=1;
    color[s]=2;

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
                _queue.push(v);

                if(color[u]==2)
                    color[v]=3;
                else
                    color[v]=2;
            }
            if(color[u]==color[v])
                return false;
        }


    }

    return true;


}
int main()
{
    while(cin>>n)
    {
        // _queue.clear();
        memset(status,0,sizeof status);
        memset(color,0,sizeof color);
        if(n==0)
            break;
        cin>>e;
        for(i=0; i<e; i++)
        {
            cin>>u>>v;
            _list[u].push_back(v);
            _list[v].push_back(u);


        }
        if(bicolouring()==true)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
        _queue=queue<int>();
        for (int y = 0; y <n; y++)
        {
          _list[y].clear();
        }


    }
}
