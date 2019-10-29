#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;
vector<ll>v;
vector<ll>::iterator it;
ll fun(ll n,ll p,ll T)
{
    ll s=0;
    while(n>0)
    {
        ll rem=0;
        rem=n%10;
        s=s+(rem*rem);
        n=n/10;
    }
    //cout<<s<<" ";
    it=find(v.begin(),v.end(),s);
    if(it!=v.end())
    {
        cout<<"Case #"<<T<<": "<<p<<" is an Unhappy number."<<endl;
        v.clear();
        return 1;

    }
    else if(s>1)
    {
        v.push_back(s);
        fun(s,p,T);
    }
    else if(s==1)
    {
        cout<<"Case #"<<T<<": "<<p<<" is a Happy number."<<endl;
        v.clear();
    }

}
int main()
{
    ll t,k;
    cin>>k;
    for(t=1; t<=k; t++)
    {
        ll n,m,i,j,l,c,q;
        cin>>m;
        l=fun(m,m,t);
    }
    //cout<<l;
    return 0;
}

