#include<bits/stdc++.h>
#define sz 10000001
long long a[sz];
long long b[sz];
long long amt[sz];
using namespace std;
typedef long long LL;
int main()
{
    LL n,m,i,j,k,l,p,c=0,q,x;
    cin>>n>>m;

    a[0]=a[1]=1;
    for(i=2; i<=sqrt(m); i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=m; j=i+j)
                a[j]=1;
        }
    }

    for(k=n; k<=m; k++)
    {
        for(l=2; l<=sqrt(m); l++)
        {
            if(a[l]==0&&k%l==0)
            {
                b[k]=1;
                break;
            }
        }
    }
    b[0]=b[1]=1;
    b[2]=b[3]=0;
    /*while(cin>>x)
        cout<<b[x];*/
   for(p=n; p<=m; p++)
    {
        l=0;
        if(b[p]==1)
        {
            for(q=2; q<=p/2; q++)
            {
                if(a[q]==0&&p%q==0)
                    l++;
                else if(l==2)
                    break;
            }

        }

        if(l==1)
            c++;
        amt[p]=c;


    } cout<<p<<" : "<<c<<endl;



}
