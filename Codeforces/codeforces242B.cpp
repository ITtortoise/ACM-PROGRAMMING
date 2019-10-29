#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,i,j,k=0,a[100000],b[100000],temp,c[100000],d[100000],mi,ma;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i];
        d[i]=b[i];
    }
    sort(c,c+n);
    mi=c[0];
    sort(d,d+n);
    ma=d[n-1];


    for(i=0; i<n; i++)
        if(a[i]==mi&&b[i]==ma)
        {
            cout<<i+1;
            k=1;
        }
    if(k==0)
        cout<<"-1"<<endl;

}

