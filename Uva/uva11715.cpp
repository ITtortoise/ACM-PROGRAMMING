#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000001
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll i=0,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        double a=0.0,s=0.0,v=0.0,u=0.0,t=0.0;
        i++;
        if(n==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=((v+u)*t)/2;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
        }
        else  if(n==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=((u+v)*t)/2;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
        else  if(n==3)
        {
            cin>>u>>a>>s;
            v=sqrt(((u*u)+(2*a*s)));
            t=(v-u)/a;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<v<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
        else  if(n==4)
        {
            cin>>v>>a>>s;
            u=sqrt(((v*v)-(2*a*s)));
            t=(v-u)/a;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(3)<<u<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
    }
    return 0;
}

