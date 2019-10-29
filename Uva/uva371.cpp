#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
ll c;
long long fun(ll n,ll c)
{
    if(n==1)
        return c;
    else if(n%2!=0)
    {
        c++;
        fun(((3*n)+1),c);
    }
    else if(n%2==0)
    {
        c++;
        fun((n/2),c);
    }
}
int main()
{
    ll i,j,y,z;
    while(cin>>y>>z)
    {
        if(y>z)
        {
            j=y;
            i=z;
        }
        else
        {
            i=y;
            j=z;
        }
        ll n,m,k=0,l,c,p=0,q,amt[sz];

        vector<pair<ll,ll>>v1;
        for(m=i; m<=j; m++)
        {
            l=fun(m,0);
            v1.push_back(make_pair(l,m));
        }
        sort(v1.begin(),v1.end());
        //for(k=0;k<v1.size()-1;k++)
            cout<<v1[v1.size()-2].first<<" "<<v1[v1.size()-2].second<<endl;


     }

    return 0;
}

