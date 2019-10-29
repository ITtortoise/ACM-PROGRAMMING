#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,k,j,l,c,p,q,a[1000],y=0,max1=0,min1=0;
    cin>>n>>m>>k;
    for(l=0; l<m; l++)
        cin>>a[l];
    cin>>q;
    for(l=0; l<m; l++)
    {
        ll rem1=0,rem2=0,c=0;
        p=q;
        max1=max(a[l],p);
        min1=min(a[l],p);
        //cout<<max1<<" ";
        while(max1>0)
        {
            rem1=max1%2;
            rem2=min1%2;
            if(rem1!=rem2)
                c++;
            //cout<<rem1<<" "<<rem2<<endl;
            max1=max1/2;
            min1=min1/2;
        }
        if(c<=k)
            y++;

    }
    cout<<y<<endl;
    return 0;
}
