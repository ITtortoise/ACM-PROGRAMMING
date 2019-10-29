#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,c,x,r,res,d,st;
vector<ll>v;

ll digit_sum(ll x)
{
    res=0;
    while(x){
        r=x%10;
        res+=r;
        x/=10;
    }
    return res;
}
int main()
{
    cin>>n;
    d=log10(n)+1;

    st=d*9;

    for(i=n-st;i<=n;i++){
        if(i+digit_sum(i)==n){
            v.pb(i);
        }
    }
    if(v.size()==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<v.size()<<endl;
    for(auto i:v)
        cout<<i<<endl;
    return 0;
}
