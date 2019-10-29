#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,c=0,m;
    while(cin>>m)
    {
        if(m==0)
            break;
        n=m;
        map<int,int>mp;
        for(i=2; i<m; i++)
        {
            while(n%i==0)
            {
                n=n/i;
                //cout<<i<<" "<<n<<endl;
                mp[i]=0;
            }

        }
        if(mp.size()>0)
        cout<<m<<" : "<<mp.size()<<endl;
        else if(mp.size()==0&&m==1)
            cout<<m<<" : "<<"0"<<endl;
        else
            cout<<m<<" : "<<"1"<<endl;
    }

}

