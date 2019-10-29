#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t=0;
    while(cin>>n)
    {   if(n==0)
          break;
        t++;
        long long int a[n],i,k=0,l=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            if(a[i]>=1&&a[i]<=99)
                k++;
            if(a[i]==0)
                l++;
        }
        cout<<"Case "<<t<<": "<<k-l<<endl;
    }
}
