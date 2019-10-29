#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000001
long long a[sz];
long long amt[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,i,j,k,l,c,p,q;
    a[0]=a[1]=1;
    for(i=2; i<=sqrt(32768); i++)
    {
        if(a[i]==0)
        {

            for(j=i+i; j<=32768; j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for(k=4; k<=32768; k+=2)
    {
        c=0;
        for(l=2; l<=k/2; l++)
        {
            if(a[k-l]==0&&a[l]==0)
                c++;
        }
        amt[k]=c;
    }
    while(cin>>n)
    {
        if(n==0)
            break;
        cout<<amt[n]<<endl;
    }


    return 0;
}

