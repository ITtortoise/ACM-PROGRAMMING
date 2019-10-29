#include<bits/stdc++.h>
#define sz 10000
long long int a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll n,i,j,k,c=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n-1; i++)
    {
        k=0;
        if(a[i+1]>a[i]&&k==0)
        {
            k=1;
            for(i=i; (a[i+1]-a[i])>0; i++)c++;
        }
        if(a[i+1]==a[i]&&k==1)
        {
            k=2;
            for(i=i; (a[i+1]-a[i])==0; i++)c++;
            if(a[i+1]<a[i]&&k==2)
            {
                k=3;
                for(i=i; (a[i+1]-a[i])<0; i++)c++;

            }
            cout<<c<<endl;
        }
        if(a[i+1]<a[i]&&k==2)
        {
            k=4;
            for(i=i; (a[i+1]-a[i])<0; i++)c++;

        }


    }


    return 0;
}

