#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 9999
long long amt[sz];
using namespace std;
typedef long long ll;
int gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}

int main()
{
    ll n;

    cin>>n;
    getchar();
    for(int t=1;t<=n;t++)
    {
        ll m,i=0,j,k,l=0,c=0,p=0,q,amt[sz],a,b;
        memset(amt,0,sizeof(amt));
        string s,s1;
        stringstream c1;
        getline(cin,s);
        c1<<s;
        while(c1>>m)
        {
            amt[i]=m;
            i++;
        }
        for(j=0; j<i; j++)
            for(k=j+1; k<i; k++)
            {
                l=gcd(amt[j],amt[k]);
                l=max(l,p);
                p=l;
            }
        cout<<l<<endl;
        s="";
    }
    return 0;


}

