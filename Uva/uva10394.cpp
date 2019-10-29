#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz  20000000
int a[sz];
int b[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k=1,l,m,o,p;
    a[0]=1,a[1]=1;
    for(i=2; i<=sqrt(20000000); i++)
        if(a[i]==0)
        {
            //cout<<i;
            for(j=i+i; j<20000000; j=j+i)
                a[j]=1;
        }
    for(int f=2; f<20000000; f++)
        if(a[f]==0&&a[f+2]==0)
        {
            b[k]=f;
            //cout<<b[k]<<" "<<b[k]+2<<" ";
            k++;
            //cout<<k<<endl;
        }

    while(cin>>n)
        cout<<"("<<b[n]<<", "<<b[n]+2<<")"<<endl;
    return 0;

}
