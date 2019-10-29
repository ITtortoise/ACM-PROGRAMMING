#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long n,ans=0,k=0,i;
    cin>>n;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            ans=n/i;
        }
    }
     k=max(ans,n/ans);
     cout<<n/k<<" "<<k;
     return 0;
}
