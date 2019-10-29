#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,k,v,m,t[sz],p=0;
    vector<int>v1;
    cin>>n>>m>>k;
    for(i=0; i<n; i++)
    {
        cin>>v;
        v1.push_back(v);
    }
    for(i=0; i<v1.size(); i++)
    {
        if(v1[i]==0)
            continue;
        else if(v1[i]<=k)
        {
            t[p]=abs((m-1)-i);
            p++;
        }
    }
    sort(t,t+p);
    cout<<t[0]*10<<endl;





}

