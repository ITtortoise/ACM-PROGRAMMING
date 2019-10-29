#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll BigMod(ll b,ll p,ll m)
{
    if(p==0)
        return 1;
    else if(p%2==1)
    {
        ll part1=b%m;
        ll part2=BigMod(b,p-1,m);
        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        ll half=BigMod(b,p/2,m);
        return (half*half)%m;
    }
}
int main()
{
    ll p,b,m;
    while(cin>>b>>p>>m)
    cout<<BigMod(b,p,m)<<endl;
    return 0;


}
