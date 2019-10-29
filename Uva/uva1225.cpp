#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999
long long amt[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k,l,c=0,p,q,amt[sz];
        string s,s1="";
        stringstream ss;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            s="";
            ss<<i;
            s=ss.str();
        }

        for(j=0; j<s.size(); j++)
            amt[s[j]-'0']++ ;

        for(j=0; j<=8; j++)
            cout<<amt[j]<<" ";
        cout<<amt[9]<<endl;
        memset(amt,0,sz);
    }

    return 0;


}

