#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c,p,q,amt[sz];
    string s;
    vector<ll>v;
    while(cin>>n>>m)
    {   c=0;
        while(n--)
        {
            k=0;
            for(i=0; i<m; i++)
            {
                cin>>p;
                v.push_back(p);
            }
            vector<ll>::iterator it;
            it = find (v.begin(),v.end(),0);
            if (it==v.end())
                c++;
            v.clear();

        }
        cout<<c<<endl;
    }

    return 0;
}

