#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000000
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c=0,p,q;
    a[0]==a[1]==1;
    for(i=2; i<=sqrt(10000000); i++)
        if(a[i]==0)
        {
            for(j=i+i; j<=10000000; j=j+i)
                a[j]=1;
        }
    //cout<<a[18];
    while(cin>>n)
    {
        int t=n;
        ll rem=0,rev=0;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            rev=rev*10+rem;
        }
        if(a[t]==0&&a[rev]==0&&rev!=t)
            cout<<t<<" is emirp."<<endl;
        else if(a[t]==0)
            cout<<t<<" is prime."<<endl;
        else if(a[t]==1)
            cout<<t<<" is not prime."<<endl;
    }

    return 0;


}

