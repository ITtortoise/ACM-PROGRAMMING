#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k=0,s=0,c=0,t=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s=s+i;
        t=t+s;
        if(t>n)
            break;
        c++;
    }
    cout<<c;


}

