#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;

    while(cin>>m>>n)
    {
       ll i,j,k,l,c,rem,count=0;
        map<ll,ll>mp;
        for(j=m; j<=n; j++)
        {
            c=0;
            i=j;
            while(i>0)
            {
                rem=0;
                rem=i%10;
                i=i/10;
                mp[rem]=0;
                c++;
            }
           if(c==mp.size())
                count++;
            mp.clear();
        }
        cout<<count<<endl;
    }

    return 0;
}

