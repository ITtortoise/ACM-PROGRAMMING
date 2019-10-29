#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    while(cin>>n)
    {
        if(n<0)
            break;
        ll p=0,i,q=1,m=0,j=0;
        for(i=1; i<=n+1; i++)
        {

            m=p+q+1;
            a[j]=m;
            j++;
            //cout<<m<<endl;
            p=q;
            q=m;

        }
        if(n==0)
            cout<<"0"<<" "<<"1"<<endl;
        else if(n==1)
            cout<<"1"<<" "<<"2"<<endl;
        else
        cout<<a[j-3]<<" "<<a[j-2]<<endl;

    }
    return 0;


}

