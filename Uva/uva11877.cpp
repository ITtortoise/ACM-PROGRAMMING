#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
ll b;
int fun(ll n,ll b)
{
    ll rem=0;
    rem=n%3;
    n=n/3;
    b=b+n;
    n=n+rem;
    if(n==2)
        cout<<b+1<<endl;
    else if(n<2)
        cout<<b<<endl;
    else if(n>2)
        fun(n,b);
}
int main()
{
    ll m;
    while(cin>>m)
    {
        if(m==0)
            break;
        fun(m,0);
    }
    return 0;
}

