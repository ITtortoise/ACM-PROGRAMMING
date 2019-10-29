#include<bits/stdc++.h>
using namespace std;
#define sz 100000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    while(1){ll n,i,j,k,a[sz],b[sz],sa=0,sb=0,m1=0,m2,m,p,x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        sa=sa+a[i];
        sb=sb+b[i];
        m=abs(a[i]-b[i]);
        if(m>m1)
        {
            m1=m;
            p=i;
        }

    }
    x=abs(sa-sb);
    y=abs((sa-a[p]+b[p])-(sb-b[p]+a[p]));
    //cout<<p;

    /*if(x>y)
        cout<<"0"<<endl;
    else*/
        cout<<m1<<" "<<p<<endl;}


}
