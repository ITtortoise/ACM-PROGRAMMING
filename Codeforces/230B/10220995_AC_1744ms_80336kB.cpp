#include<bits/stdc++.h>
#define sz 10000001
using namespace std;
long long int a[sz];
int main()
{
    long long int i,j,k,l,p,n,m,t;
    double m2;
    a[0]=a[1]=1;
    for(i=2; i<=sqrt(1e7); i++)
    {
        if(a[i]==0)
        {

            for(j=i+i; j<=1e7; j=j+i)
            {
                a[j]=1;
            }
        }
    }
    cin>>t;

    for(k=0; k<t; k++)
    {
        m=0,m2=0;
        cin>>n;
        m=sqrt(n);
        m2=sqrt(n);
        if(m2-m==0)
        {
            if(a[m]==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }



}

