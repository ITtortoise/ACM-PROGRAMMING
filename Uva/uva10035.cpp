#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000001
int a[sz];
int b[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        ll i,j=0,k=0,l=0,c=0,p,rem=0,rem1=0,t,s=0,q=0;
        while(n>0)
        {
            rem=n%10;
            a[k]=rem;
            k++;
            n=n/10;
        }
        while(m>0)
        {
            rem1=m%10;
            b[l]=rem1;
            l++;
            m=m/10;
        }
        t=max(k,l);
        for(p=0; p<t; p++)
        {
            s=a[p]+b[p]+c;
            if(s>9)
            {
                j++;
                c=1;
            }
            else
                c=0;
            s=0;
        }
        if(j==0)
            cout<<"No carry operation."<<endl;
        else if(j==1)
            cout<<j<<" carry operation."<<endl;
        else if(j>1)
            cout<<j<<" carry operations."<<endl;

    }

    return 0;


}

