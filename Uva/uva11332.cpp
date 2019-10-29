#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int fun(ll n)
{
    int s=0,rem;
    while(n>0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    if(s>9)
        fun(s);
    else if(s>=1&&s<=9)
        return(s);
}
int main()
{
    ll n,m,i,j,k,l;
    while(cin>>m)
    {
        if(m==0)
            break;
        k=0;
        k=fun(m);
        cout<<k<<endl;
    }
}
