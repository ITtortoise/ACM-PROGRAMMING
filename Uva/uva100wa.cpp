#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m,i,j,a,s,cnt=0,ar[1000000+5],n,x,y, mx=-1;

ll function1(ll m,ll cnt)
{
    if(m<=1)
    {
        s=cnt+1;
        return s;
    }

    else if(m%2!=0)
    {
        m=(m*3)+1;
        cnt++;

        function1(m,cnt);
    }
    else if(m%2==0)
    {
        m=m/2;
        cnt++;
        function1(m,cnt);
    }


}
int main()
{
    cin>>x>>y;
    for(i=min(x,y); i<=max(x,y); i++)
    {
        a=function1(i,0);
        ar[i]=a;
    }

        for(j=min(x,y); j<=max(x,y); j++)
            mx=max(mx,ar[j]);
        cout<<x<<' '<<y<<' '<<mx<<endl;


}
