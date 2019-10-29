#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,m,i,j,k,v,z1,z2;
map<ll,ll>_mp;
int main()
{

    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;


        for(i=0; i<n+m; i++)
        {
            cin>>v;
            _mp[v]++;
            if(_mp[v]==2)
                j++;


        }
        //cin>>z1>>z2;
        cout<<j<<endl;
        _mp.clear();
        j=0;
    }
    return 0;



}

