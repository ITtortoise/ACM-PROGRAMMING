#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    ll n,i,j,k,a,b,s,c=0;
    cin>>a>>b>>n;
    for(j=0; j<=9; j++)
    {
        s=a*10+j;
        if(s%b==0)
        {
            a=s;
            c++;
        }
    }
    if(c>0)
    {
        cout<<a;
        for(i=c; i<n; i++)
            cout<<"0";
    }
    if(c==0)
    cout<<"-1"<<endl;
}

