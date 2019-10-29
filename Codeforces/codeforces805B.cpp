#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,k,a,rem,r;
    string s1,s2,s3,s4;
    s1="a";
    s2="aa";
    s3="aab";
    s4="aabb";
    sf("%lld",&n);
    rem=n%4;
    r=n/4;

    for(i=1;i<=r;i++)
        cout<<s4;
    if(rem==1)
        cout<<s1;
    else if(rem==2)
        cout<<s2;
    else if(rem==3)
        cout<<s3;

}

