#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b)
{
    if(b%a==0)
        return a;

    ll rem=b%a;
    b=a;
    gcd(rem,b);
}
int main()
{

    ll a,b,x,y,n,m,i,j,p,q;
    cin>>x>>y>>a>>b;
    p=a;
    q=b;
    n=gcd(min(a,b),max(a,b));
    p=p/n;
    q=q/n;
    //cout<<p<<q;

    cout<<min(x/p,y/q)<<endl;


}
