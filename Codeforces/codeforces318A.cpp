#include<bits/stdc++.h>
using namespace std;
int main()
{       long long int p,i,k=0,t=0,n;
        cin>>n>>p;
        if(n%2==0)
        {
            t=n/2;
            if(p<=t)
                cout<<p*2-1;
            else
                cout<<p-(n-p);
        }
        else  if(n%2!=0)
        {
            t=n/2+1;
            if(p<=t)
                cout<<p*2-1;
            else
                cout<<p-(n-p)-1;
        }

    return 0;
}
